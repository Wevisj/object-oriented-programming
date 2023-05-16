#include <cstdlib>
#include <ctime>
#include "SelectableRandom.h"

SelectableRandom::SelectableRandom(bool even) {
	srand((unsigned)time(0));
	type = even;
}

int SelectableRandom::next() {
	if (type) { // 짝수만 발생하도록
		int n = rand() + 1;
		if ((n - 1) % 2 == 0)
			return n - 1;
		else
			return n - 2;
	}
	else { // 홀수만 발생하도록
		int n = rand();
		if (n % 2 != 0)
			return n;
		else
			return n + 1;
	}
}

int SelectableRandom::nextInRange(int from, int to) {
	if (type) { // 짝수만 발생하도록
		int n = rand() % (to - from + 1) + from + 1;
		if ((n - 1) % 2 == 0)
			return n - 1;
		else
			return n - 2;
	}
	else { // 홀수만 발생하도록
		int n = rand() % (to - from + 1) + from;
		if (n % 2 != 0)
			return n;
		else
			if (n - 1 < from)
				return n + 1;
			else
				return n - 1;
	}
}