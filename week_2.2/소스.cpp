#include <iostream>
#include <cstring>
using namespace std;
void decide(char s[], char t[], char player_1[], char player_2[]);

int main() {
	//시작
	cout << "가위바위보 게임을 시작합니다" << endl;

	char player_1[100], player_2[100]; //C-string 스타일을 위해 배열로 플레이어 변수를 선언해줌

	cout << "이름 입력 >> ";
	cin.getline(player_1, 100); // 플레이어 배열에 사용자가 이름을 입력함
	cout << "이름 입력 >> ";
	cin.getline(player_2, 100); // 플레이어 배열에 사용자가 이름을 입력함
	//사용자가 끝내길 원할 때 까지 반복함
	while (true) {
		//입력
		cout << player_1 << " >> ";
		char s[30];
		cin >> s;

		//잘못 입력했는지 확인한 후 잘못 입력했다면 continue
		if (strcmp(s, "가위") != 0 && strcmp(s, "바위") != 0 && strcmp(s, "보") != 0) {
			cout << "잘못 입력하였습니다." << endl;
			continue;
		}

		cout << player_2 << " >> ";
		char t[30];
		cin >> t;

		//잘못 입력했는지 확인한 후 잘못 입력했다면 continue
		if (strcmp(t, "가위") != 0 && strcmp(t, "바위") != 0 && strcmp(t, "보") != 0) {
			cout << "잘못 입력하였습니다." << endl;
			continue;
		}

		//승자 결정
		decide(s, t, player_1, player_2);

		//반복 여부를 물어본 후 yes외의 것을 입력받으면 반복문을 중단함
		cout << "yes를 입력하면 계속 >> ";
		char res[20];
		cin >> res;
		if (strcmp(res, "yes") != 0) {
			break;
		}
	}
	return 0;
}

void decide(char s[], char t[], char player_1[], char player_2[]) {
	//모든 경우의 수를 if문으로 연결하여 비교하고, 비기게 되는 경우는 else로 묶어 처리함
	if (strcmp(s, "가위") == 0 && strcmp(t, "보") == 0) {
		cout << player_1 << " 승" << endl;
	}
	else if (strcmp(s, "가위") == 0 && strcmp(t, "바위") == 0) {
		cout << player_2 << " 승" << endl;
	}
	else if (strcmp(s, "바위") == 0 && strcmp(t, "가위") == 0) {
		cout << player_1 << " 승" << endl;
	}
	else if (strcmp(s, "바위") == 0 && strcmp(t, "보") == 0) {
		cout << player_2 << " 승" << endl;
	}
	else if (strcmp(s, "보") == 0 && strcmp(t, "바위") == 0) {
		cout << player_1 << " 승" << endl;
	}
	else if (strcmp(s, "보") == 0 && strcmp(t, "가위") == 0) {
		cout << player_2 << " 승" << endl;
	}
	else {
		cout << "비겼습니다." << endl;
	}
}