#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	Person(const Person& b); // ���� ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(const Person& b) { // default ���� ������. ���� ����
	this->id = b.id;
	this->name = new char[strlen(b.name) + 1];
	strcpy(this->name, b.name);
}

Person::Person(int id, const char* name) { // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� ����
	strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::~Person() {// �Ҹ���
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� �Ҹ�
}

void Person::changeName(const char* name) { // �̸� ����
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

void f(Person p) {
	p.show();
}

int main() {
	Person father(1, "Kitae");			// (1) father ��ü ����
	f(father);

	
	Person daughter(father);			// (2) daughter ��ü ���� ����. ���������ȣ��

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();						// (3) father ��ü ���
	daughter.show();					// (3) daughter ��ü ���

	daughter.changeName("Grace"); // (4) daughter�� �̸��� "Grace"�� ����
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;
	father.show();						// (5) father ��ü ���
	daughter.show();					// (5) daughter ��ü ���
	
	return 0;								// (6), (7) daughter, father ��ü �Ҹ�
}