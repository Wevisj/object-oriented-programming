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
	bool visited[5] = { false }; // �湮�� ���� �˱� ���� �� Ÿ�� �迭
	int min, next, distance; // ������� �̵��Ÿ��� ���� ���� ��, ���� �̵��� ��, �̵��� �Ÿ�

	for (int i = 0; i < 5; i++) {
		min = 10000; // ���� ���� ���� ���� ã�� ���� ��� ������ ū ���� �ּڰ��� ����
		for (int j = 0; j < 5; j++) {
			if (!visited[j] && min > abs(current - floor[j])) { // �湮���� �ʾҰ�, �ּڰ����� �̵��Ÿ��� ���� �� if���� ����
				min = abs(current - floor[j]); // �ּڰ��� ��ü
				next = j; // �̵��� ���� �ε����� ����
			}
		}
		cout << floor[next] << "������ ���ϴ�." << ' '; // �̵��ϴ� ���� ����Ѵ�.
		visited[next] = true; // �湮������, �湮�� ���� �ε����� true�� �ٲ���
		distance = abs(floor[next] - current);
		current = floor[next];
		movingDistance += distance; // �̵� �Ÿ��� �����Ѵ�.
		cout << "���� �̵� �Ÿ��� " << getMovingDistance() << endl;
	}
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�.
	cout << "�� �̵� �Ÿ��� " << getMovingDistance() << endl;
}