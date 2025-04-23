#include<iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack() {
		tos = 0;
		}
	bool push(int n) {
		if (tos == 10) {
			return false;
		}
		p[tos] = n;
		tos++;
		return true;

	}
	bool pop(int& n) {
		if (tos == 0) return false;
		tos--;
		n = p[tos];
		return true;
	}
};


int main() {
	MyIntStack a;

	// [푸시 과정]
	for (int i = 0; i < 11; i++) {
		if (a.push(i))       // 스택에 값 넣기 시도
			cout << i << ' ';  // 성공한 값 출력
		else
			cout << endl << i + 1 << " 번째 stack full" << endl;
	}

	int n;

	// [팝 과정]
	for (int i = 0; i < 11; i++) {
		if (a.pop(n))       // 스택에서 값 꺼내기 시도
			cout << n << ' ';  // 성공한 값 출력
		else
			cout << endl << i + 1 << " 번째 stack empty";
	}

	cout << endl;
}
