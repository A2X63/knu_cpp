#include<iostream>
#include<string>
using namespace std;
int main() {
	int t;
	string text, newtext;
	string* ptext, *pnewtext;
	cout << "아래에 한줄로 입력하세요. (exit를 입력하면 종료합니다) \n >>";
	t = text.size();
	cin >> text;
	ptext = &text;
	pnewtext = &newtext;
	for (int i = 0; t - i != 0; i++) {
		(*pnewtext) += (*ptext)[t - i - 1];
		(*pnewtext) = (*pnewtext) + (*ptext)[t-i-1]
	}
}