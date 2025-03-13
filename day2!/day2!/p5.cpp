#include <iostream>
#include<string>
using namespace std;
int main() {
	char xcount[100];
	int count = 0;
	cout << "문자들을 입력하라(100개 미만)." << '\n';
	cin.getline(xcount, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (xcount[i] == 'x')
			count += 1;
	}
	cout << "x의 개수는 " << count;
}
