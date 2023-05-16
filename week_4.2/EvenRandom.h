#ifndef EVENRANDOM_H
#define ENVERANDOM_H

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int from, int to);
};

#endif