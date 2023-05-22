#include <iostream>
using namespace std;

#include "ScheduleSMDF.h"

ScheduleSMDF::ScheduleSMDF(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

// 도착한 순서대로 엘리베이트를 이동시킨다.
void ScheduleSMDF::run() {
	showMessage();
	showCurrent(); // 현재 엘리베이터 위치를 출력한다.
	showFloor(); // 현재 요청된 층들을 출력한다.
	bool visited[5] = { false }; // 방문한 층을 알기 위한 불 타입 배열
	int min, next, distance; // 순서대로 이동거리가 가장 적은 층, 현재 이동할 층, 이동한 거리

	for (int i = 0; i < 5; i++) {
		min = 10000; // 현재 가장 작은 층을 찾기 위해 어떠한 수보다 큰 값을 최솟값에 넣음
		for (int j = 0; j < 5; j++) {
			if (!visited[j] && min > abs(current - floor[j])) { // 방문하지 않았고, 최솟값보다 이동거리가 작을 때 if문을 실행
				min = abs(current - floor[j]); // 최솟값을 교체
				next = j; // 이동할 층의 인덱스를 저장
			}
		}
		cout << floor[next] << "층으로 갑니다." << ' '; // 이동하는 층을 출력한다.
		visited[next] = true; // 방문했으니, 방문한 층의 인덱스를 true로 바꿔줌
		distance = abs(floor[next] - current);
		current = floor[next];
		movingDistance += distance; // 이동 거리를 누적한다.
		cout << "누적 이동 거리는 " << getMovingDistance() << endl;
	}
	showCurrent(); // 현재 엘리베이터 위치를 출력한다.
	cout << "총 이동 거리는 " << getMovingDistance() << endl;
}