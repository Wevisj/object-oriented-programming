#ifndef SELECTABLERANDOM_H
#define SELECTABLERANDOM_H

class SelectableRandom {
private:
	bool type;
public:
	SelectableRandom(bool even);
	int next();
	int nextInRange(int from, int to);
};

#endif