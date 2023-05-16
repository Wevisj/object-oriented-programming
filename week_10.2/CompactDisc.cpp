#include "CompactDisc.h"
#include <iostream>
using namespace std;

CompactDisc::CompactDisc(int type, int id, string info, string maker, int price,
	string title, string singer) : Product(type, id, info, maker, price) {
	this->title = title;
	this->singer = singer;
}

void CompactDisc::show() {
	Product::show();
	cout << "앨범 제목 : " << title << endl;
	cout << "가수 : " << singer << endl;
}