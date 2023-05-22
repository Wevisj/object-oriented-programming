#include "DomainManager.h"

DomainManager::DomainManager() { // ������
	cout << "***** ������ ���� ���α׷� SiteMan�� �����մϴ�." << endl;
}

DomainManager::~DomainManager() { // �Ҹ���
	cout << "���α׷� ����..." << endl;
}

void DomainManager::getMenu() { // �޴��� �Է�
	cin >> menu;
}

void DomainManager::run() { // ����
	bool flag = true; // ���� ���θ� �Ǵ��ϴ� ����
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
					dic.insert(make_pair(site_name, url)); // ����Ʈ�̸��� Ű, url�� ������ ���� ����� ������
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
					if (dic.find(site_name) == dic.end()) // �ʿ� �Է��� ����Ʈ�̸��� ���� ���
						cout << site_name << "�� ���� ����Ʈ�Դϴ�." << endl;
					else // ����Ʈ�̸��� url�� �ʿ��� ������ ����Ѵ�
						cout << site_name << "�� url�� " << dic[site_name] << endl;
				}
			}
			break;
		case 3: // ����
			flag = false;
			break;
		}
	}
}