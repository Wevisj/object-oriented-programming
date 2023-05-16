#include <iostream>
using namespace std;

class Circle { // 클래스의 선언부
private:
	int radius; // 멤버 변수
public:
	double getArea(); // 멤버 함수, 다른 객체를 위함
	Circle(); // 생성자 함수
	Circle(int r); // 생성자 함수
	~Circle();
};

// 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() : Circle(1) { // 매개변수가 없는 생성자
}

Circle::Circle(int r) { // 매개변수가 있는 생성자
	if (r > 30) {
		radius = 30;
		cout << radius << "인 circle 생성, 크게는 안됨" << endl;
		return;
	}
	radius = r;
	cout << radius << "인 circle 생성" << endl;
}

Circle::~Circle() {
	cout << radius << "인 circle 소멸" << endl;
}


// 메인 함수
int main() {
	Circle donut; // Circle() 생성자 호출하는 코드 삽입
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // Circle(int r) 생성자 호출하는 코드 삽입
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}