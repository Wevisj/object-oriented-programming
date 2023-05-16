#include <iostream>
#include "SelectableRandom.h"

using namespace std;

int main() {
	SelectableRandom evenR(false);

	cout << 0 << "ºÎÅÍ " << RAND_MAX << "±îÁö Â¦¼ö/È¦¼ö 10°³" << endl;
	for (int i = 0; i < 10; i++)
		cout << evenR.next() << '\t';
	cout << endl;

	cout << 2 << "ºÎÅÍ " << 4 << "±îÁö Â¦¼ö/È¦¼ö 10°³" << endl;
	for (int i = 0; i < 10; i++)
		cout << evenR.nextInRange(2, 4) << '\t';
	cout << endl;
}