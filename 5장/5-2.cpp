#include<iostream>
using namespace std;
void half(double &a) {
	a = 0.5 * a;
}

int main() {
	double n = 20;
	half(n);
	cout << n;
}