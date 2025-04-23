#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() { name = ""; tel = ""; }
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel){ this->name = name; this->tel = tel; }
};
int main() {
	cout << "이름과 전화 번호를 입력해 주세요.\n";
	Person c[3];
	for (int i = 0; i < 3; i++) {
		string n,t;
		cout << "사람 " << i + 1 << ">> ";
		cin >> n >> t;
		c[i].set(n, t);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) cout << c[i].getName() << ' ';
	cout << "전화번호를 검색합니다. 이름을 입력하세요 >>";
	string search;
	cin >> search;
	for (int i = 0; i < 3; i++) {
		if (search == c[i].getName()) {
			cout << "전화 번호는 " << c[i].getTel()<<'\n';
		}
	}

}