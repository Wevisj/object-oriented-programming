#include <iostream>

using namespace std;

#include "Circle.h"

// ���� �Լ�
int main() {
	Circle donut; // Circle() ������ ȣ���ϴ� �ڵ� ����
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); // Circle(int r) ������ ȣ���ϴ� �ڵ� ����
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}