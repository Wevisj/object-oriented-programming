#include <iostream>
using namespace std;

int big(int a, int b) {
	return a > b ? a : b;
}

int big(int a[], int size) {
	int max = a[0];
	for (int i = 1; i < size; i++) {
		if (max < a[i])
			max = a[i];
	}
	return max;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}