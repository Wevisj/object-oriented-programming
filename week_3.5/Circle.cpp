#include <iostream>
using namespace std;

#include "Circle.h"

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

