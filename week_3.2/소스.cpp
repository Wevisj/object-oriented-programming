#include <iostream>
using namespace std;

class Circle { // Ŭ������ �����
public:
	int radius; // ��� ����
	double getArea(); // ��� �Լ�, �ٸ� ��ü�� ����
	Circle(); // ������ �Լ�
	Circle(int r); // ������ �Լ�
};

// ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() : Circle(1) { // �Ű������� ���� ������
	
}

Circle::Circle(int r) { // �Ű������� �ִ� ������
	radius = r;
	cout << radius << "�� circle ����" << endl;
}


// ���� �Լ�
int main() {
	Circle donut; // Circle() ������ ȣ���ϴ� �ڵ� ����
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); // Circle(int r) ������ ȣ���ϴ� �ڵ� ����
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}