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

void Schedule::showFloor() {
	cout << "���� ��ư�� ������ ������ ";
	for (int i = 0; i < 5; i++)
		cout << floor[i] << ' ';
	cout << endl;
}

void Schedule::showCurrent() {
	cout << "���� ������������ ��ġ�� " << current << endl;
}

void Schedule::showMessage() {
	cout << "\n*****���ݺ��� " << name << " ������� ���������Ͱ� ����˴ϴ� *****" << endl;
}