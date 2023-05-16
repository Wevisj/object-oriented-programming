#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power() { }
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}

	void show() {
		cout << "kcik=" << kick << "punch=" << punch << endl;
	}

	Power operator+ (Power& b);
	Power operator+ (int n);
	bool operator== (Power& b);
	Power& operator+= (Power& b);
	Power operator++();
	bool operator! ();
};

bool Power::operator!() {
	if (kick == 0 && punch == 0) return true;
	else return false;
}

Power Power::operator++() {
	kick++;
	punch++;

	return *this;
}

Power& Power::operator+=(Power& b) {
	kick += b.kick;
	punch += b.punch;

	return *this;
}

bool Power::operator==(Power& b) {
	if (kick == b.kick && punch == b.punch)
		return true;
	else
		return false;
}

Power Power::operator+(Power& b) {
	Power temp;
	temp.kick = kick + b.kick;
	temp.punch = punch + b.punch;

	return temp;
}

Power Power::operator+(int n) {
	Power temp;
	temp.kick = kick + n;
	temp.punch = punch + n;

	return temp;
}

int main() {
	Power a(3, 5), b(3, 5), c;

	c = a + b;
	a.show(); b.show(); c.show();

	if (a == b)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;


	(a += b) += c;
	a.show(); b.show();

	b = a + 2;
	a.show(); b.show();

	b = ++a;
	a.show(); b.show();
}