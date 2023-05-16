#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c);
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; cout << "�Ϲ� ������ ����" << endl; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(const Circle& c) {
	radius = c.radius;
	cout << "���� ������ ����" << endl;
}

Circle f(Circle c) { // c�� ������ �� ���� ������ ȣ��
	cout << "�Լ� f: " << c.getArea() << endl;

	return c; // c�� ���纻 ����
}

int main() {
	Circle src(30); // �Ϲ� ������ ȣ�� �Ű����� ����
	Circle dest(src); // dest(src); detst ��ü�� ���� ������ ȣ��

	dest = src;

	f(src);
	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}