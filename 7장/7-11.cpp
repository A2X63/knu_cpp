#include<iostream>
using namespace std;

class Stack {
	int data[100];
	int top = -1;
public:
	Stack& operator<<(int x) { // push
		data[++top] = x;
		return *this;
	}
	Stack& operator>>(int& x) { // pop
		x = data[top--];
		return *this;
	}
	bool operator!() { // empty check
		return top == -1;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;

	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}
