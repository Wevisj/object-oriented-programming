#ifndef SCHEDULESCAN_H
#define SCHEDULESCAN_H

#include "Schedule.h"

class ScheduleSCAN : public Schedule {
public:
	ScheduleSCAN(string name, int floor[], int current = 0);
	virtual void run();
	void upSort(int num[], int n); // 오름차순 정렬
	void downSort(int num[], int n); // 내림차순 정렬
};

#endif