#ifndef BOOK_H
#define BOOK_H
#include "Product.h"

class Book :public Product {
	int isbnN;
	string bookTitle;
	string writer;
public:
	Book(int type, int id, string info, string maker, int price, int isbnN, string bookTitle, string writer);
	void show();
};

#endif // !BOOK_H
