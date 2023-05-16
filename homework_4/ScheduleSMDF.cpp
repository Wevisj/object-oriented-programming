#include <iostream>
using namespace std;

#include "ScheduleSMDF.h"

ScheduleSMDF::ScheduleSMDF(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

// ������ ������� ��������Ʈ�� �̵���Ų��.
void ScheduleSMDF::run() {
	showMessage();
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�.
	showFloor(); // ���� ��û�� ������ ����Ѵ�.
	bool visited[5] = { false };
	int min, next, distance;

	for (int i = 0; i < 5; i++) { // ���� ��ġ���� ���� ��, ���� ������ �з��Ѵ�
		min = 10000;
		for (int j = 0; j < 5; j++) {
			if (!visited[j] && min > abs(current - floor[j])) {
				min = abs(current - floor[j]);
				next = j;
			}
		}
		cout << floor[next] << "������ ���ϴ�." << ' '; // �̵��ϴ� ���� ����Ѵ�.
		visited[next] = true;
		distance = abs(floor[next] - current);
		current = floor[next];
		movingDistance += distance; // �̵� �Ÿ��� �����Ѵ�.
		cout << "���� �̵� �Ÿ��� " << getMovingDistance() << endl;
	}
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�.
	cout << "�� �̵� �Ÿ��� " << getMovingDistance() << endl;
}