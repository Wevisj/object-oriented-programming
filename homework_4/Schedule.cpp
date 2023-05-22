#include <iostream>
using namespace std;

#include "Schedule.h"

Schedule::Schedule(string name, int floor[], int current) {
	this -> name = name;
	for (int i = 0; i < 5; i++) {
		this->floor[i] = floor[i];
	}
	this->current = current;
	movingDistance = 0;
}

int Schedule::getMovingDistance() {
	return movingDistance;
}

void Schedule::showFloor() { // 입력받은 층 출력
	cout << "현재 버튼이 눌러진 층들은 ";
	for (int i = 0; i < 5; i++)
		cout << floor[i] << ' ';
	cout << endl;
}

void Schedule::showCurrent() { // 현재 층 출력
	cout << "현재 엘리베이터의 위치는 " << current << endl;
}

void Schedule::showMessage() { // 운행되는 방식 출력
	cout << "\n*****지금부터 " << name << " 방식으로 엘리베이터가 운행됩니다 *****" << endl;
}