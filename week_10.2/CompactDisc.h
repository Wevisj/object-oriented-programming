#ifndef COMPACTDISC_H
#define COMPACTDISC_H
#include "Product.h"

class CompactDisc :public Product {
	string title;
	string singer;
public:
	CompactDisc(int type, int id, string info, string maker, int price, string title, string singer);
	void show();
};

#endif // !COMPACTDISC_H
