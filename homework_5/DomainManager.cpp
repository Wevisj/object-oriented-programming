#include "DomainManager.h"

DomainManager::DomainManager() { // ������cout << "***** ������ ���� ���α׷� SiteMan�� �����մϴ�." << endl;
}
DomainManager::~DomainManager() { // �Ҹ���
	cout << "���α׷� ����..." << endl;
}
void DomainManager::getMenu() { // �޴��� �Է�
	cin >> menu;
}
void DomainManager::run() { // ����
	bool flag = true; // ���� ���θ� �Ǵ��ϴ� ����
	int i;
	string site_name; // ����ڰ� �Է��ϴ� ����Ʈ �̸�
	string url; // ����ڰ� �Է��ϴ� ����Ʈ url
	while (true) {
		if (!flag) // flag������ false�� ���α׷� ����
			break;
		cout << "�Է�:1, ��ȸ:2, ����:3 >> "; // �޴� ���
		getMenu(); // �޴� �Է�
		switch (menu) {
		case 1: // �Է�
			while (true) {
				cout << "����Ʈ�̸�>>";
				cin >> site_name;
				if (site_name == "�ڷ�") // ����Ʈ�̸��� "�ڷ�"�� ��� �Է� ����
					break;
				else {
					cout << "url>>";
					cin >> url;
					vect.push_back(pair<string, string>(site_name, url)); // ����Ʈ�̸��� url�� ������ ���Ϳ� ����
				}
			}
			break;
		case 2: // ��ȸ
			while (true) {
				cout << "����Ʈ�̸�>>";
				cin >> site_name;
				if (site_name == "�ڷ�") // ����Ʈ�̸��� "�ڷ�"�� ��� ��ȸ ����
					break;
				else {
					for (i = 0; i < vect.size(); i++) {
						if (vect[i].first == site_name) {
							cout << vect[i].first << "�� url�� " << vect[i].second << endl; // �̸�-url ������ vector���� ������ ���
							break;
						}
					}
					if (i == vect.size()) // vector�� ���� ���������� ã�� ���� ���
						cout << site_name << "�� ���� ����Ʈ�Դϴ�." << endl;
				}
			}
			break;
		case 3: // ����
			flag = false;
			break;
		}
	}
}