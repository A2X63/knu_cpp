#include<iostream>
using namespace std;

class Circle {
	int r;
public:
	Circle() {
		r = 1;
	}
	Circle(int r) {
		this->r = r;
	}
	int get() {
		return r;
	}
};

void swap(Circle& a, Circle& b) {
	Circle c;
	c = a;
	a = b;
	b = c;
}

int main() {
	Circle a(3), b(5);
	cout << "a : " << a.get() << ", b : "<< b.get()<<endl;
	swap(a, b);
	cout << "a : " << a.get() << ", b : " << b.get();
	return 0;
}