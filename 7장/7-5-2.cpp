#include<iostream>
using namespace std;

class Color {
	int c1, c2, c3;
public:
	Color(int a = 0, int b = 0, int c = 0) : c1{ a }, c2{ b }, c3{ c } {};
	void show() {
		cout << c1 << ' ' << c2 << ' ' << c3 << endl;
	};
	friend Color operator+(Color c1, Color c2);
	friend bool operator==(Color c1, Color c2);
};

Color operator+(Color c1, Color c2) {
	int red = c1.c1 + c2.c1;
	int blue = c1.c2 + c2.c2;
	int green = c1.c3 + c2.c3;
	return Color(red, blue, green);
}
bool operator == (Color c1, Color c2) {
	return c1.c1 == c2.c1 && c1.c2 == c2.c2 && c1.c3 == c2.c3;
}


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