#include "DomainManager.h"

DomainManager::DomainManager() { // 생성자
	cout << "***** 도메인 관리 프로그램 SiteMan을 시작합니다." << endl;
}

DomainManager::~DomainManager() { // 소멸자
	cout << "프로그램 종료..." << endl;
}

void DomainManager::getMenu() { // 메뉴를 입력
	cin >> menu;
}

void DomainManager::run() { // 실행
	bool flag = true; // 종료 여부를 판단하는 변수
	string site_name; // 사용자가 입력하는 사이트 이름
	string url; // 사용자가 입력하는 사이트 url
	while (true) {
		if (!flag) // flag변수가 false면 프로그램 종료
			break;
		cout << "입력:1, 조회:2, 종료:3 >> "; // 메뉴 출력
		getMenu(); // 메뉴 입력
		switch (menu) {
		case 1: // 입력
			while (true) {
				cout << "사이트이름>>";
				cin >> site_name;
				if (site_name == "뒤로") // 사이트이름이 "뒤로"인 경우 입력 종료
					break;
				else {
					cout << "url>>";
					cin >> url;
					dic.insert(make_pair(site_name, url)); // 사이트이름은 키, url은 값으로 쌍을 만들어 저장함
				}
			}
			break;
		case 2: // 조회
			while (true) {
				cout << "사이트이름>>";
				cin >> site_name;
				if (site_name == "뒤로") // 사이트이름이 "뒤로"인 경우 조회 종료
					break;
				else {
					if (dic.find(site_name) == dic.end()) // 맵에 입력한 사이트이름이 없는 경우
						cout << site_name << "은 없는 사이트입니다." << endl;
					else // 사이트이름과 url을 맵에서 가져와 출력한다
						cout << site_name << "의 url은 " << dic[site_name] << endl;
				}
			}
			break;
		case 3: // 종료
			flag = false;
			break;
		}
	}
}