#include "ConversationBook.h"
#include <iostream>
using namespace std;

ConversationBook::ConversationBook(int type, int id, string info, string maker, int price,
	int isbnN, string bookTitle, string writer, string lan) : Book(type, id, info, maker, price, isbnN, bookTitle, writer) {
	this->lan = lan;
}

void ConversationBook::show() {
	Book::show();
	cout << "¾ð¾î : " << lan << endl;
}