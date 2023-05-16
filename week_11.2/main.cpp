#include <iostream>
using namespace std;

class Shape { // �߻� Ŭ���� : ���� ���� �Լ��� �Ѱ� �̻� ���� �� �߻� Ŭ������ �Ҹ�
	Shape* next;
protected:
	virtual void draw() { cout << "Shape" << endl; } // = 0; ���� ���� �Լ� (�Լ��� ���� ������� ����)
public:
	Shape() { next = NULL; }
	virtual ~Shape() { cout << "Shape �Ҹ�" << endl; }
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
	~Circle() { cout << "Circle �Ҹ�" << endl; }
	void draw() { cout << "Circle" << endl; }
};

class Rectangle : public Shape {
public:
	~Rectangle() { cout << "Rectangle �Ҹ�" << endl; }
	void draw() { cout << "Rectangle" << endl; }
};

class Line : public Shape {
public:
	~Line() { cout << "Line �Ҹ�" << endl; }
	void draw() { cout << "Line" << endl; }
};

int main() {
	// ���Ḯ��Ʈ ����
	Shape *pStart = NULL, *pLast; // ���Ḯ��Ʈ�� head
	Shape* p = new Circle();
	pStart = p;
	pLast = pStart;
	pLast = pLast->add(new Rectangle());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Rectangle());

	// ���Ḯ��Ʈ ���
	p = pStart;
	while (p != NULL) {
		p->paint();
		p = p->getNext();
	}
	
	// ���Ḯ��Ʈ ����
	p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext();
		delete p; // ��ĳ���õ� �����ͷ� ���� -> ���� �Ҹ��ڰ� �����ؾ� �ϴ� ������. Shape��ü�� �����ϱ� ����
		p = q;
	}
}