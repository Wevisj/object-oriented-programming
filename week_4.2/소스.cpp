#include <iostream>
#include "EvenRandom.h"
using namespace std;

int main() {
	EvenRandom r;

	cout << 0 << "���� " << RAND_MAX << "���� ¦�� 10��" << endl;
	for(int i =0 ;i<10;i++)
		cout << r.next() << '\t';
	cout << endl;

	cout << 2 << "���� " << 4 << "���� ¦�� 10��" << endl;
	for (int i = 0; i < 10; i++)
		cout << r.nextInRange(2, 4) << '\t';
	cout << endl;
}