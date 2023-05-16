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
	cout << "*** 상품 관리 작동 ***";
	while (true) {
		int menu = getMainMenu();
		switch (menu) {
		case 1: add(); break;
		case 2: search(); break;
		case 3: return;
		default:
			cout << "잘해!!" << endl;
		}
	}
}

void ProductManager::add() { // 상품 추가
	string info, maker, title, singer, bookTitle, writer, lan;
	int price, isbnN;
	int menu = getAddMenu();
	switch (menu) {
	case 1:
		cout << "상품 설명>>";
		getline(cin, info);
		cout << "생산자>>";
		getline(cin, maker);
		cout << "가격>>";
		cin >> price; cin.ignore();
		cout << "책제목>>";
		getline(cin, bookTitle);
		cout << "저자>>";
		getline(cin, writer);
		cout << "ISBN>>";
		cin >> isbnN; cin.ignore();

		// 업캐스팅
		list[index] = new Book(1, index, info, maker, price, isbnN, bookTitle, writer);
		index++;
		size++;
		break;
	case 2: 
		cout << "상품 설명>>";
		getline(cin, info);
		cout << "생산자>>";
		getline(cin, maker);
		cout << "가격>>";
		cin >> price; cin.ignore();
		cout << "앨범 제목>>";
		getline(cin, title);
		cout << "가수>>";
		getline(cin, singer);

		// 업캐스팅
		list[index] = new CompactDisc(2, index, info, maker, price, title, singer);
		index++;
		size++;
		break;
	case 3:
		cout << "상품 설명>>";
		getline(cin, info);
		cout << "생산자>>";
		getline(cin, maker);
		cout << "가격>>";
		cin >> price; cin.ignore();
		cout << "책제목>>";
		getline(cin, bookTitle);
		cout << "저자>>";
		getline(cin, writer);
		cout << "언어>>";
		getline(cin, lan);
		cout << "ISBN>>";
		cin >> isbnN; cin.ignore();

		// 업캐스팅
		list[index] = new ConversationBook(3, index, info, maker, price, isbnN, bookTitle, writer, lan);
		index++;
		size++;
		break;
	default:
		cout << "잘해!!" << endl;
	}
}

void ProductManager::search() {
	for (int i = 0; i < size; i++) {
		if (list[i]->getType() == 1) {
			Book* p = (Book*)list[i]; // 다운 캐스팅
			p->show();
		}
		else if (list[i]->getType() == 2) {
			CompactDisc* p = (CompactDisc*)list[i]; // 다운 캐스팅
			p->show();
		}
		else if (list[i]->getType() == 3) {
			ConversationBook* p = (ConversationBook*)list[i]; // 다운 캐스팅
			p->show();
		}
	}
}

int ProductManager::getMainMenu() {
	cout << endl << "상품 추가(1), 조회(2), 끝내기(3)? ";
	int menu;
	cin >> menu; cin.ignore();
	return menu;
}

int ProductManager::getAddMenu() {
	cout << "상품 종류 책(1), CD(2), 회화책(3)? ";
	int menu;
	cin >> menu; cin.ignore();
	return menu;
}