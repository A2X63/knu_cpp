#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r = 0) : radius{ r } {}
	void show() {
		cout << "radius = " << radius << " ÀÎ¿ø\n";
	}
	friend Circle operator+(int n, Circle c);
};

Circle operator+(int n, Circle c) {
	return Circle(c.radius + n);
}

int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}
