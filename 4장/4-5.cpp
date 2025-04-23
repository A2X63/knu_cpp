#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
using namespace std;
int main() {
	srand((unsigned)time(0));
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하시면 종료합니다) \n";
	while (true) {
		string s;
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		int size = s.length();
		while (true) {
			int idx = rand() % size;
			if (isalpha(s[idx])) {
				s[idx] = char((rand() % 26) + 'a');
				break;
			}
		}
		cout << s << endl;
	}
}