#include <iostream>
using namespace std;

#include "ScheduleSCAN.h"

ScheduleSCAN::ScheduleSCAN(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

void ScheduleSCAN::upSort(int num[], int n) { // 넘어온 배열을 오름차순 정렬
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
}

void ScheduleSCAN::downSort(int num[], int n) { // 넘어온 배열을 내림차순 정렬
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (num[j] < num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
}

// 이동방향의 끝까지 이동 후 반대방향의 끝으로 엘리베이트를 이동시킨다.
void ScheduleSCAN::run() {
	showMessage();
	showCurrent(); // 현재 엘리베이터 위치를 출력한다.
	showFloor(); // 현재 요청된 층들을 출력한다.
	int down[5]; // 현재 층보다 아래 있는 층들
	int up[5]; // 현재 층보다 위에 있는 층들
	int count_d = 0, count_u = 0; // 아래, 위에 있는 층들의 수

	for (int i = 0; i < 5; i++) { // 현재 위치보다 낮은 층, 높은 층들을 분류한다
		if (floor[i] < current)
			down[count_d++] = floor[i];
		else
			up[count_u++] = floor[i];
	}
	downSort(down, count_d); // 낮은 층들을 내림차순으로 정렬함
	upSort(up, count_u); // 높은 층들을 오름차순으로 정렬함

	int i = 0;
	 // 진행방향이 위쪽이므로 위쪽 층들을 먼저 배열에 담은 후 아래 층들을 담는다
	for (int j = 0; j < count_u; j++)
		floor[i++] = up[j];
	for (int j = 0; j < count_d; j++)
		floor[i++] = down[j];

	int distance = 0;
	for (int i = 0; i < 5; i++) { // 배열에 담겨진 순서대로 이동한다
		cout << floor[i] << "층으로 갑니다." << ' '; // 이동하는 층을 출력한다.
		distance = abs(floor[i] - current); // 이동한 거리를 절댓값으로 구함
		current = floor[i];
		movingDistance += distance; // 이동 거리를 누적한다.
		cout << "누적 이동 거리는 " << getMovingDistance() << endl;
	}
	showCurrent(); // 현재 엘리베이터 위치를 출력한다.
	cout << "총 이동 거리는 " << getMovingDistance() << endl;
}