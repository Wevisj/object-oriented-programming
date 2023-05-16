#include <iostream>
using namespace std;

class Shape { // 추상 클래스 : 순수 가상 함수를 한개 이상 가질 시 추상 클래스로 불림
	Shape* next;
protected:
	virtual void draw() { cout << "Shape" << endl; } // = 0; 순수 가상 함수 (함수를 전혀 사용하지 않음)
public:
	Shape() { next = NULL; }
	virtual ~Shape() { cout << "Shape 소멸" << endl; }
	void paint() { draw(); }
	Shape* add(Shape* p);
	Shape* getNext() { return next; }
};

Shape* Shape::add(Shape* p) {
	next = p;
	return p;
}

class Circle : public Shape {
public:
	~Circle() { cout << "Circle 소멸" << endl; }
	void draw() { cout << "Circle" << endl; }
};

class Rectangle : public Shape {
public:
	~Rectangle() { cout << "Rectangle 소멸" << endl; }
	void draw() { cout << "Rectangle" << endl; }
};

class Line : public Shape {
public:
	~Line() { cout << "Line 소멸" << endl; }
	void draw() { cout << "Line" << endl; }
};

int main() {
	// 연결리스트 구현
	Shape *pStart = NULL, *pLast; // 연결리스트의 head
	Shape* p = new Circle();
	pStart = p;
	pLast = pStart;
	pLast = pLast->add(new Rectangle());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Rectangle());

	// 연결리스트 출력
	p = pStart;
	while (p != NULL) {
		p->paint();
		p = p->getNext();
	}
	
	// 연결리스트 삭제
	p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext();
		delete p; // 업캐스팅된 포인터로 삭제 -> 가상 소멸자가 존재해야 하는 이유임. Shape객체를 삭제하기 때문
		p = q;
	}
}