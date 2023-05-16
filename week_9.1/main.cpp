#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect a, Rect b);
};


class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool RectManager::equals(Rect a, Rect b);
};

bool RectManager::equals(Rect a, Rect b) {
	if (a.width == b.width && a.height == b.height)
		return true;
	else
		return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	RectManager man;

	if (man.equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}