#include <iostream>
using namespace std;

#include "ScheduleSMDF.h"

ScheduleSMDF::ScheduleSMDF(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

void upSort(int num[], int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
}

void downSort(int num[], int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (num[j] < num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
}

// 도착한 순서대로 엘리베이트를 이동시킨다.
void ScheduleSMDF::run() {
	showMessage();
	showCurrent(); // 현재 엘리베이터 위치를 출력한다.
	showFloor(); // 현재 요청된 층들을 출력한다.
	int down[5];
	int up[5];
	int count_d = 0, count_u = 0;

	for (int i = 0; i < 5; i++) { // 현재 위치보다 낮은 층, 높은 층들을 분류한다
		if (floor[i] < current)
			down[count_d++] = floor[i];
		else
			up[count_u++] = floor[i];
	}
	downSort(down, count_d); // 낮은 층들을 내림차순으로 정렬함
	upSort(up, count_u); // 높은 층들을 오름차순으로 정렬함

	int i = 0; // 에러가 발생 하는 곳
	// 현재 위치에서 가까운 층이 아래쪽인지, 위쪽인지 확인
	if (abs(current - down[0]) < abs(current - up[0])) { // 현재 위치에서 가까운 층이 아래쪽
		for (int j = 0; j < count_d; j++)
			floor[i++] = down[j];
		for (int j = 0; j < count_u; j++)
			floor[i++] = up[j];
	} else { // 현재 위치에서 가까운 층이 위쪽
		for (int j = 0; j < count_u; j++)
			floor[i++] = up[j];
		for (int j = 0; j < count_d; j++)
			floor[i++] = down[j];
	}

	int distance = 0;
	for (int i = 0; i < 5; i++) {
		cout << floor[i] << "층으로 갑니다." << ' '; // 이동하는 층을 출력한다.
		distance = abs(floor[i] - current);
		current = floor[i];
		movingDistance += distance; // 이동 거리를 누적한다.
		cout << "누적 이동 거리는 " << getMovingDistance() << endl;
		showCurrent(); // 현재 엘리베이터 위치를 출력한다.
		cout << "총 이동 거리는 " << getMovingDistance() << endl;
	}
}