#include "ProductManager.h"
#include <iostream>
#include "CompactDisc.h"
#include "Book.h"
#include "ConversationBook.h"
using namespace std;

ProductManager::ProductManager() {
	for (int i = 0; i < 100; i++) {
		list[i] = NULL;
	}
}

ProductManager::~ProductManager() {
	for (int i = 0; i < 100; i++) {
		if (list[i] != NULL)
			delete list[i];
	}
}

void ProductManager::run() {
	cout << "*** ��ǰ ���� �۵� ***";
	while (true) {
		int menu = getMainMenu();
		switch (menu) {
		case 1: add(); break;
		case 2: search(); break;
		case 3: return;
		default:
			cout << "����!!" << endl;
		}
	}
}

void ProductManager::add() { // ��ǰ �߰�
	string info, maker, title, singer, bookTitle, writer, lan;
	int price, isbnN;
	int menu = getAddMenu();
	switch (menu) {
	case 1:
		cout << "��ǰ ����>>";
		getline(cin, info);
		cout << "������>>";
		getline(cin, maker);
		cout << "����>>";
		cin >> price; cin.ignore();
		cout << "å����>>";
		getline(cin, bookTitle);
		cout << "����>>";
		getline(cin, writer);
		cout << "ISBN>>";
		cin >> isbnN; cin.ignore();

		// ��ĳ����
		list[index] = new Book(1, index, info, maker, price, isbnN, bookTitle, writer);
		index++;
		size++;
		break;
	case 2: 
		cout << "��ǰ ����>>";
		getline(cin, info);
		cout << "������>>";
		getline(cin, maker);
		cout << "����>>";
		cin >> price; cin.ignore();
		cout << "�ٹ� ����>>";
		getline(cin, title);
		cout << "����>>";
		getline(cin, singer);

		// ��ĳ����
		list[index] = new CompactDisc(2, index, info, maker, price, title, singer);
		index++;
		size++;
		break;
	case 3:
		cout << "��ǰ ����>>";
		getline(cin, info);
		cout << "������>>";
		getline(cin, maker);
		cout << "����>>";
		cin >> price; cin.ignore();
		cout << "å����>>";
		getline(cin, bookTitle);
		cout << "����>>";
		getline(cin, writer);
		cout << "���>>";
		getline(cin, lan);
		cout << "ISBN>>";
		cin >> isbnN; cin.ignore();

		// ��ĳ����
		list[index] = new ConversationBook(3, index, info, maker, price, isbnN, bookTitle, writer, lan);
		index++;
		size++;
		break;
	default:
		cout << "����!!" << endl;
	}
}

void ProductManager::search() {
	for (int i = 0; i < size; i++) {
		if (list[i]->getType() == 1) {
			Book* p = (Book*)list[i]; // �ٿ� ĳ����
			p->show();
		}
		else if (list[i]->getType() == 2) {
			CompactDisc* p = (CompactDisc*)list[i]; // �ٿ� ĳ����
			p->show();
		}
		else if (list[i]->getType() == 3) {
			ConversationBook* p = (ConversationBook*)list[i]; // �ٿ� ĳ����
			p->show();
		}
	}
}

int ProductManager::getMainMenu() {
	cout << endl << "��ǰ �߰�(1), ��ȸ(2), ������(3)? ";
	int menu;
	cin >> menu; cin.ignore();
	return menu;
}

int ProductManager::getAddMenu() {
	cout << "��ǰ ���� å(1), CD(2), ȸȭå(3)? ";
	int menu;
	cin >> menu; cin.ignore();
	return menu;
}