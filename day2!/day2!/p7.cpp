#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char password[100];
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��Ͻÿ�>> ";
		cin.getline(password, 100, '\n');
		if (strcmp(password, "yes") == 0) {
			cout << "�����մϴ�.";
			break;
		}
	}
}
