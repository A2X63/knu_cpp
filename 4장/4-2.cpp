#include<iostream>
using namespace std;

int main() {
	int* a = new int[5];
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum+= a[i];
	}
	float r = (float)sum / 5;
	cout << "평균 " << r;
	delete[] a;



}