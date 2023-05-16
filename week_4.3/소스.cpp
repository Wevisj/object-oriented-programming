#include <iostream>
#include "SelectableRandom.h"

using namespace std;

int main() {
	SelectableRandom evenR(false);

	cout << 0 << "���� " << RAND_MAX << "���� ¦��/Ȧ�� 10��" << endl;
	for (int i = 0; i < 10; i++)
		cout << evenR.next() << '\t';
	cout << endl;

	cout << 2 << "���� " << 4 << "���� ¦��/Ȧ�� 10��" << endl;
	for (int i = 0; i < 10; i++)
		cout << evenR.nextInRange(2, 4) << '\t';
	cout << endl;
}