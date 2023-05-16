#include <iostream>
using namespace std;

class Base {
public:
	virtual void draw() { cout << "Base::draw() called" << endl; }; // virtual : 오버라이딩을 허용함 (동적 바인딩 지시어 )
};

class Derived : public Base {
public:
	void draw() { cout << "Derived::draw() called" << endl; }; // 오버라이딩됨
};

int main() {
	Derived d;
	d.Base::draw();

	Derived* p = &d;
	p->draw();

	Base* q = p; // 업캐스팅
	q->draw();
}