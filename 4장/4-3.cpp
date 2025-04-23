#include<iostream>
#include<string>
#include<cctype>
using namespace std;


int main() {
	string s;
	cout << "문자열 입력>> ";
	getline(cin, s);
	int a = s.length();
	int count = 0;
	for (int i = 0; i < a; i++) {
		if (tolower(s[i]) == 'a') count++;
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}