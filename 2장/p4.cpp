#include <iostream>
using namespace std;
int main() {
	double n[6];
	double max = 0;
	cout << "5개의 실수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 5; i++) {
		if (n[i] > max)
			max = n[i];
	}
	cout << "제일 큰 수 = " << max;

}

