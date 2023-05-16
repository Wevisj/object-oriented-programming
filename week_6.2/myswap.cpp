#include <iostream>
using namespace std;

bool average(int a[], int size, int &avg) {
	if (size <= 0) return false;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	avg = sum / size;
	return true;
}

int main2() {
	int x[] = { 0,1,2,3,4,5 };
	int avg;
	bool res = average(x, -1, avg);
	if (res == false) {
		cout << "매개변수 오류" << endl;
	}
	else {
		cout << avg << endl;
	}

	return 0;
}

int main() {
	string s("hello");

	s.append(" ok").append(" yaya").append("집에가자");
	cout << s << endl;
}