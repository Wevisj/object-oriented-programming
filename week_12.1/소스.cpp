#include <iostream>
using namespace std;

int main() {
	char buf[100];
	int i = 0;
	while (true) {
		cout << "���� " << i << ">>";
		cin.getline(buf, 100); // 99�� ������ �а� �������� NULL�� ���� �� enter�� ��������
		//cin.get(buf, 100)�� ����� ��, cin.ignore()�� ������� ������ ������ ���� �� ������ �߻��Ѵ�.
		if (strcmp(buf, "exit") == 0)
			break;
		cout << buf << endl;
		i++;
	}
}

void main1() {
	cout.put('H');
	cout.put('e');
	cout.put('l');
	cout.put(61);

	cout.put('C').put('r').put('r');

	cout << "cin.get()���� ��� ���� �б�" << endl;
	char c;
	while (true) {
		cin.get(c);
		if (cin.eof())	
			break;
		cout.put(c);
		if (c == '\n')
			break;
	}
}	