#include <iostream>
#include "EvenRandom.h"
using namespace std;

int main() {
	EvenRandom r;

	cout << 0 << "부터 " << RAND_MAX << "까지 짝수 10개" << endl;
	for(int i =0 ;i<10;i++)
		cout << r.next() << '\t';
	cout << endl;

	cout << 2 << "부터 " << 4 << "까지 짝수 10개" << endl;
	for (int i = 0; i < 10; i++)
		cout << r.nextInRange(2, 4) << '\t';
	cout << endl;
}