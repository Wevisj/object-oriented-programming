#include <iostream>
using namespace std;

class Rectangle { // Ŭ������ �����
public:
	int width, height; // ��� ����

	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

// ������
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

Rectangle::Rectangle(){ // �Ű������� ���� ������
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) { // �Ű������� �ִ� ������
	width = w, height = h;
}

Rectangle::Rectangle(int length) { // �Ű������� �ִ� ������
	width = height = length;
}

// ���� �Լ�
int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}