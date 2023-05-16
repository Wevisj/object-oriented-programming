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
	cout << "---- 상품ID : " << id << endl;
	cout << "상품 설명 : " << info << endl;
	cout << "상품 제작자 : " << maker << endl;
	cout << "상품 가격 : " << price << endl;
}