#include <iostream>
using namespace std;

class Circle { // Ŭ������ �����
public:
	int radius; // ��� ����
	double getArea(); // ��� �Լ�, �ٸ� ��ü�� ����
};

// ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

// ���� �Լ�
int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}