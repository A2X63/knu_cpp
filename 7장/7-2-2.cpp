#include<iostream>
#include<string>
using namespace std;

class Book {
	int price, pages;
	string name;
public:
	Book(string n = "", int pr = 0, int pa = 0) : name(n), price(pr), pages(pa) {}

	friend bool operator==(Book B, int a);
	friend bool operator==(Book B, string a);
	friend bool operator==(Book B, Book a);
};

	bool operator==(Book B, int a) {
		if (B.price == a)
			return true;
		else return false;
	}
	bool operator==(Book B,string a) {
		if (B.name == a)
			return true;
		else return false;
	}
	bool operator==(Book B,Book a) {
		if (B.name == a.name && B.price == a.price && B.pages == a.pages)
			return true;
		else return false;

	}

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책 입니다." << endl;
}