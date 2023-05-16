#include "Random.h"
#include <cstdlib>
#include <ctime>

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	int n = rand();
	return n;
}

int Random::nextInRange(int start, int end) {
	int n = rand() % (end - start + 1) + start;
	return n;
}
