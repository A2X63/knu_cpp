#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char password[100], cpassword[100];
	cout << "새 암호를 입력하세요>>";
	cin >> password;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> cpassword;
	if (strcmp(password, cpassword) == 0)
		cout << "같습니다";
	else
		cout << "다릅니다";
}
