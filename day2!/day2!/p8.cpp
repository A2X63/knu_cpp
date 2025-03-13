#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char password1[100], password2[100], password3[100], password4[100], password5[100];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하시오>> ";
		cin.getline(password1, 100, ';');
		if (strcmp(password, "yes") == 0) {
			cout << "종료합니다.";
			break;
		}
	}
}
