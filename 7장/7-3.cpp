#include<iostream>
#include<string>
using namespace std;

class Book {
	string name;
	int page, price;
public:
	Book(string n = "", int pr = 0, int pa = 0) : name{ n }, price{ pr }, page{ pa } {};
	bool operator!() {
		if (price) return false;
		else return true;
	}

};
int main() {
	Book book("∫≠∑ËΩ√¿Â", 0, 50);
	if (!book) cout << "∞¯¬•¥Ÿ" << endl;
}