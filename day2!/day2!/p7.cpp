#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char password[100];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하시오>> ";
		cin.getline(password, 100, '\n');
		if (strcmp(password, "yes") == 0) {
			cout << "종료합니다.";
			break;
		}
	}
}
