#ifndef CONVERSATIONBOOK_H
#define CONVERSATIONBOOK_H
#include "Book.h"

class ConversationBook :public Book {
	string lan;
public:
	ConversationBook(int type, int id, string info, string maker, int price,
		int isbnN, string bookTitle, string writer, string lan);
	void show();
};

#endif // !CONVERSATIONBOOK_H
