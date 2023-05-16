#include <iostream>
using namespace std;

class Base {
public:
	virtual void draw() { cout << "Base::draw() called" << endl; }; // virtual : �������̵��� ����� (���� ���ε� ���þ� )
};

class Derived : public Base {
public:
	void draw() { cout << "Derived::draw() called" << endl; }; // �������̵���
};

int main() {
	Derived d;
	d.Base::draw();

	Derived* p = &d;
	p->draw();

	Base* q = p; // ��ĳ����
	q->draw();
}