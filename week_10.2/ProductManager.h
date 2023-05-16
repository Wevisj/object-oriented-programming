#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include "Product.h"

class ProductManager {
	Product* list[100];
	int index = 0;
	int size = 0;
	void add();
	void search();
	int getMainMenu();
	int getAddMenu();
public:
	ProductManager();
	~ProductManager();
	void run();
};

#endif // !PRODUCTMANAGER_H
