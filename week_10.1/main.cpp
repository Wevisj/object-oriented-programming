#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y; //�� �� (x,y) ��ǥ��
public:
	Point(int x, int y) { 
		this->x; 
		this->y = y; 
	}
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x, int y, string color) : Point(x, y) {
		this->x = x;
		this->y = y;
		this->color = color;
	}
	void showColorPoint() { 
		show();
		cout << color << endl;
	}
};

int main() {
	ColorPoint cp(2, 3, "Red"); // �Ļ� Ŭ������ ��ü ����
	cp.showColorPoint();
}