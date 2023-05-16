#include <iostream>
#include <cstdlib>
#include "Random.h"

using namespace std;

int main() {
	Random r;

	cout << 0 << "부터 " << RAND_MAX << "까지 10개" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << '\t';
	}
	cout << endl;

	cout << 2 << "부터 " << 4 << "까지 10개" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << '\t';
	}
	cout << endl;
}