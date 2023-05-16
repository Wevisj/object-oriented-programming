#include <iostream>
using namespace std;

int f() {
	return 100;
}

int main() {
	cout << "Hello" << "\n";
	cout << 3 << 5.5 << true << f() << "\n";

	int a, b;
	cin >> a >> b;

	cout << a * b << "\n";

	return 0;
}