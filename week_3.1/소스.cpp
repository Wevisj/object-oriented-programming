#include <iostream>
using namespace std;

class Circle { // 클래스의 선언부
public:
	int radius; // 멤버 변수
	double getArea(); // 멤버 함수, 다른 객체를 위함
};

// 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}

// 메인 함수
int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}