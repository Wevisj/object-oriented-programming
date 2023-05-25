#include <iostream>
using namespace std;

int main() {
	char buf[100];
	int i = 0;
	while (true) {
		cout << "라인 " << i << ">>";
		cin.getline(buf, 100); // 99개 까지만 읽고 마지막에 NULL을 넣은 후 enter를 버려버림
		//cin.get(buf, 100)를 사용할 때, cin.ignore()을 사용하지 않으면 공백이 들어갔을 때 오류가 발생한다.
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

	cout << "cin.get()으로 모든 문자 읽기" << endl;
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