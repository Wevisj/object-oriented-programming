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

// ������ ������� ��������Ʈ�� �̵���Ų��.
void ScheduleSMDF::run() {
	showMessage();
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�.
	showFloor(); // ���� ��û�� ������ ����Ѵ�.
	int down[5];
	int up[5];
	int count_d = 0, count_u = 0;

	for (int i = 0; i < 5; i++) { // ���� ��ġ���� ���� ��, ���� ������ �з��Ѵ�
		if (floor[i] < current)
			down[count_d++] = floor[i];
		else
			up[count_u++] = floor[i];
	}
	downSort(down, count_d); // ���� ������ ������������ ������
	upSort(up, count_u); // ���� ������ ������������ ������

	int i = 0; // ������ �߻� �ϴ� ��
	// ���� ��ġ���� ����� ���� �Ʒ�������, �������� Ȯ��
	if (abs(current - down[0]) < abs(current - up[0])) { // ���� ��ġ���� ����� ���� �Ʒ���
		for (int j = 0; j < count_d; j++)
			floor[i++] = down[j];
		for (int j = 0; j < count_u; j++)
			floor[i++] = up[j];
	} else { // ���� ��ġ���� ����� ���� ����
		for (int j = 0; j < count_u; j++)
			floor[i++] = up[j];
		for (int j = 0; j < count_d; j++)
			floor[i++] = down[j];
	}

	int distance = 0;
	for (int i = 0; i < 5; i++) {
		cout << floor[i] << "������ ���ϴ�." << ' '; // �̵��ϴ� ���� ����Ѵ�.
		distance = abs(floor[i] - current);
		current = floor[i];
		movingDistance += distance; // �̵� �Ÿ��� �����Ѵ�.
		cout << "���� �̵� �Ÿ��� " << getMovingDistance() << endl;
		showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�.
		cout << "�� �̵� �Ÿ��� " << getMovingDistance() << endl;
	}
}