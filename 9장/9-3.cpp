#include <iostream>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;

	void read() {
		cout << name << ":\n처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
		cin >> x >> y;
	}

	void write() {
		cout << x << "에서 " << y << "까지의 합 = " << sum << "입니다." << endl;
	}

protected:
	LoopAdder(string n = "") : name(n) {}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calc() = 0;

public:
	void run() {
		read();
		sum = calc();
		write();
	}
};

class ForLoopAdder : public LoopAdder {
public:
	ForLoopAdder(string n = "") : LoopAdder(n) {}

	int calc() override {
		int res = 0;
		for (int i = getX(); i <= getY(); i++) res += i;
		return res;
	}
};

int main() {
	ForLoopAdder loop("For Loop");
	loop.run();
	return 0;
}
