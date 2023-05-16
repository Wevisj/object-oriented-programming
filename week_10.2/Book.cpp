#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(int type, int id, string info, string maker, int price,
	int isbnN, string bookTitle, string writer) : Product(type, id, info, maker, price) {
	this->isbnN = isbnN;
	this->bookTitle = bookTitle;
	this->writer = writer;
}

void Book::show() {
	Product::show();
	cout << "ISBN ��ȣ : " << isbnN << endl;
	cout << "å ���� : " << bookTitle << endl;
	cout << "���� : " << writer << endl;
}