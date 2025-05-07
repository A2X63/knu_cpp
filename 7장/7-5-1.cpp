#include<iostream>
using namespace std;

class Color {
	int c1, c2, c3;
public:
	Color(int a = 0, int b = 0, int c = 0) : c1{ a }, c2{ b }, c3{ c } {};
	void show() {
		cout << c1 << ' ' << c2 << ' ' << c3 << endl;
	};
	Color operator+(Color c) {
		c1 = c1 + c.c1;
		c2 = c2 + c.c2;
		c3 = c3 + c.c3;
		return Color(c1,c2,c3);
	}
	bool operator == (Color c) {
		return c1 == c.c1 && c2 == c.c2 && c3 == c.c3;
	}

};


int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}