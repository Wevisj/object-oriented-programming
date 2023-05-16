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
	bool visited[5] = { false };
	int min, next, distance;

	for (int i = 0; i < 5; i++) { // 현재 위치보다 낮은 층, 높은 층들을 분류한다
		min = 10000;
		for (int j = 0; j < 5; j++) {
			if (!visited[j] && min > abs(current - floor[j])) {
				min = abs(current - floor[j]);
				next = j;
			}
		}
		cout << floor[next] << "층으로 갑니다." << ' '; // 이동하는 층을 출력한다.
		visited[next] = true;
		distance = abs(floor[next] - current);
		current = floor[next];
		movingDistance += distance; // 이동 거리를 누적한다.
		cout << "누적 이동 거리는 " << getMovingDistance() << endl;
	}
	showCurrent(); // 현재 엘리베이터 위치를 출력한다.
	cout << "총 이동 거리는 " << getMovingDistance() << endl;
}