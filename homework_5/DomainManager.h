#ifndef DOMAINMANAGER_H
#define DOMAINMANAGER_H
#include <vector>
#include <iostream>
using namespace std;

class DomainManager {
	int menu; // 입력 조회 종료 중에서 선택할 수 있게 함
	vector<pair<string, string>> vect; // vector 생성
public:
	DomainManager();
	~DomainManager();
	void run();
	void getMenu(); // 메뉴를 입력함
};
#endif // !DOMAINMANAGER_H