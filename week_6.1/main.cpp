#include <iostream>
#include "Circle.h"
using namespace std;

void increase(Circle *c) {
	int r = c->getRadius();
	c->setRadius(r + 1);
}

Circle getCircle() {
	Circle tmp(50);
	return tmp;
}

int main() {
	int n = 2;
	int& refn = n;

	refn++;
	cout << n << endl;
	n += 10;
	cout << refn << endl;

	int* p = &refn;
	*p = 200;
	cout << n << ' ' << refn << endl;

	Circle circle;
	Circle& refc = circle;

	cout << refc.getArea() << endl;

	/*Circle waffle(30);
	waffle = getCircle();
	cout << waffle.getRadius() << endl;
	*/
}