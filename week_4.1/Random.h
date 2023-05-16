#ifndef RANDOM_H
#define RANDOM_H

class Random { // 클래스 선언부
public:
	Random();
	int next(); // 0 ~ RAND_MAX
	int nextInRange(int start, int end);
};
#endif