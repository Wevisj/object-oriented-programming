#ifndef DOMAINMANAGER_H
#define DOMAINMANAGER_H
#include <vector>
#include <iostream>
using namespace std;

class DomainManager {
	int menu; // �Է� ��ȸ ���� �߿��� ������ �� �ְ� ��
	vector<pair<string, string>> vect; // vector ����
public:
	DomainManager();
	~DomainManager();
	void run();
	void getMenu(); // �޴��� �Է���
};
#endif // !DOMAINMANAGER_H