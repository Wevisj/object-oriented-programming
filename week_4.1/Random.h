#ifndef RANDOM_H
#define RANDOM_H

class Random { // Ŭ���� �����
public:
	Random();
	int next(); // 0 ~ RAND_MAX
	int nextInRange(int start, int end);
};
#endif