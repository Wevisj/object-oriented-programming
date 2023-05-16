#include <iostream>

using namespace std;

#include "Circle.h"

// 메인 함수
int main() {
	Circle donut; // Circle() 생성자 호출하는 코드 삽입
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // Circle(int r) 생성자 호출하는 코드 삽입
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}