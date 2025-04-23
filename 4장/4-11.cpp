#include<iostream>
using namespace std;
class Container {
	int size;
public:
	Container() { size = 10; }
	void fill(int& rest) {
		rest = 1;
		size = 10;
	}
	void consume(int& rest) {
		size--;
		if (size < 0) { rest = 0; }
	}
	int getSize() {
		return size;
	}
};
class CoffeeVendingMachine {
	Container tong[3];
	int rest = 1;
	void selectEspresso() {
		tong[0].consume(rest);
		tong[1].consume(rest);
		if (rest == 1) cout << "에스프레소 드세요\n";
		else cout << "원료가 부족합니다.\n";
	}
	void selectAmericano() {
		tong[0].consume(rest);
		tong[1].consume(rest);
		tong[1].consume(rest);
		if (rest == 1) cout << "아메리카노 드세요\n";
		else cout << "원료가 부족합니다.\n";
	}
	void selectSugarCoffee() {
		tong[0].consume(rest);
		tong[1].consume(rest);
		tong[1].consume(rest);
		tong[2].consume(rest);
		if (rest == 1) cout << "설탕커피 드세요\n";
		else cout << "원료가 부족합니다.\n";
	}
	void show() {
		cout << "커피 " << tong[0].getSize() << " 물 " << tong[1].getSize() << " 설탕 " << tong[2].getSize() << endl;
	}
public:
	void run() {
		cout << "***** 커피자판기를 작동합니다.*****\n";
		while (true) {
			int choice;
			cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				selectEspresso();
				break;
			case 2:
				selectAmericano();
				break;
			case 3:
				selectSugarCoffee();
				break;
			case 4:
				show();
				break;
			case 5:
				for (int i = 0; i < 3; i++) tong[i].fill(rest);
				show();
				break;
			default:
				cout << "잘못된 입력입니다.\n";
				break;
			}
	}
	}

};


int main() {
	CoffeeVendingMachine m;
	m.run();

}
