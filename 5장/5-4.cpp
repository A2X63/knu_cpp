#include <iostream>
using namespace std;
bool bigger(int a, int b, int& big) {
	if (a > b) {
		big = a;
	}
	else if (a < b) {
		big = b;
	}
	return(a == b);
};

int main() {
	int a, b ,big=0;
	cout << "두 숫자를 입력";
	cin >> a >> b;
	if (bigger(a, b, big))
		cout << "same";
	else
		cout << "큰 수는 " << big << endl;
	
}