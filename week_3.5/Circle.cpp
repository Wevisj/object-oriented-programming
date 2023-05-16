#include <iostream>
using namespace std;

#include "Circle.h"

// ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() : Circle(1) { // �Ű������� ���� ������
}

Circle::Circle(int r) { // �Ű������� �ִ� ������
	if (r > 30) {
		radius = 30;
		cout << radius << "�� circle ����, ũ�Դ� �ȵ�" << endl;
		return;
	}
	radius = r;
	cout << radius << "�� circle ����" << endl;
}

Circle::~Circle() {
	cout << radius << "�� circle �Ҹ�" << endl;
}

