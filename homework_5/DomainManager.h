#ifndef DOMAINMANAGER_H
#define DOMAINMANAGER_H
#include <map>
#include <iostream>
using namespace std;

class DomainManager {
	int menu; // �Է� ��ȸ ���� �߿��� ������ �� �ְ� ��
	map<string, string> dic; // map ����
public:
	DomainManager();
	~DomainManager();
	void run();
	void getMenu(); // �޴��� �Է���
};

#endif // !DOMAINMANAGER_H