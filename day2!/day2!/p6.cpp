#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char password[100], cpassword[100];
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> password;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> cpassword;
	if (strcmp(password, cpassword) == 0)
		cout << "�����ϴ�";
	else
		cout << "�ٸ��ϴ�";
}
