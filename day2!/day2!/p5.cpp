#include <iostream>
#include<string>
using namespace std;
int main() {
	char xcount[100];
	int count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << '\n';
	cin.getline(xcount, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (xcount[i] == 'x')
			count += 1;
	}
	cout << "x�� ������ " << count;
}
