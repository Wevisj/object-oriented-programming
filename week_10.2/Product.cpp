#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(int type, int id, string info, string maker, int price) {
	this->type = type;
	this->id = id;
	this->info = info;
	this->maker = maker;
	this->price = price;
}

void Product::show() {
	cout << "---- ��ǰID : " << id << endl;
	cout << "��ǰ ���� : " << info << endl;
	cout << "��ǰ ������ : " << maker << endl;
	cout << "��ǰ ���� : " << price << endl;
}