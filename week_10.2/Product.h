#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product {
	int type;
	int id;
	string info;
	string maker;
	int price;
public:
	Product(int type, int id, string info, string maker, int price);
	void show();
	int getType() { return type; } // getter
	int getId() { return id; }
};

#endif