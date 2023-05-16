#include "EvenRandom.h"
#include <cstdlib>
#include <ctime>

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int n = rand() + 1;
	if ((n - 1) % 2 == 0)
		return n - 1;
	else 
		return n - 2;
}

int EvenRandom::nextInRange(int from, int to) {
	int n = rand() % (to - from + 1) + from + 1;
	if ((n - 1) % 2 == 0)
		return n - 1;
	else
		return n - 2;
}