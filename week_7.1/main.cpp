#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c);
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; cout << "일반 생성자 실행" << endl; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(const Circle& c) {
	radius = c.radius;
	cout << "복사 생성자 실행" << endl;
}

Circle f(Circle c) { // c가 생성될 때 복사 생성자 호출
	cout << "함수 f: " << c.getArea() << endl;

	return c; // c의 복사본 생성
}

int main() {
	Circle src(30); // 일반 생성자 호출 매개변수 존재
	Circle dest(src); // dest(src); detst 객체의 복사 생성자 호출

	dest = src;

	f(src);
	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}