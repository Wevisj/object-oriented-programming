#include <iostream>
using namespace std;

class Rectangle { // 클래스의 선언부
public:
	int width, height; // 멤버 변수

	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

// 구현부
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

Rectangle::Rectangle(){ // 매개변수가 없는 생성자
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) { // 매개변수가 있는 생성자
	width = w, height = h;
}

Rectangle::Rectangle(int length) { // 매개변수가 있는 생성자
	width = height = length;
}

// 메인 함수
int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}