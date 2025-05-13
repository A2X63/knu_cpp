#include<iostream>
using namespace std;

class Seat {
	string name;
public:
	Seat(string n = "---") : name{ n } {}
	void reserve(const string& n) { name = n; }
	void cancel() { name = "---"; }
	void show() const { cout << name; }
};

class Schedule {
	Seat seats[8];
	string time;
public:
	Schedule(string t = "00시") : time{ t } {}
	void reserve(int idx, const string& name) { seats[idx].reserve(name); }
	void cancel(int idx) { seats[idx].cancel(); }
	void show() const {
		cout << time << "\t";
		for (int i = 0; i < 8; i++) {
			seats[i].show(); cout << "\t";
		}
		cout << endl;
	}
	void setTime(const string& t) { time = t; }
	string getTime() const { return time; }
};

class AirlineBook {
	Schedule schedules[3];
public:
	AirlineBook() {
		schedules[0].setTime("07시");
		schedules[1].setTime("12시");
		schedules[2].setTime("17시");
	}
	void show(int idx) const { schedules[idx].show(); }
	void reserve(int idx, int seat, const string& name) { schedules[idx].reserve(seat, name); }
	void cancel(int idx, int seat) { schedules[idx].cancel(seat); }
};

class Console {
	static int menu;
	static int time;
	static AirlineBook book;

public:
	static void run() {
		cout << "***** 한성항공에 오신 것을 환영합니다 *****" << endl;
		while (true) {
			displayMenu();
			switch (menu) {
			case 1: reserve(); break;
			case 2: cancel(); break;
			case 3: showAll(); break;
			case 4: return;
			default: cout << "잘못된 입력입니다.\n"; break;
			}
		}
	}

	static void displayMenu() {
		cout << "예약:1, 취소:2, 보기:3, 끝내기:4 >> ";
		cin >> menu;
	}

	static void reserve() {
		cout << "07시:1, 12시:2, 17시:3 >> ";
		cin >> time;
		book.show(time - 1);
		int seat; string name;
		cout << "좌석번호 >> "; cin >> seat;
		cout << "이름입력 >> "; cin >> name;
		book.reserve(time - 1, seat - 1, name);
	}

	static void cancel() {
		cout << "07시:1, 12시:2, 17시:3 >> ";
		cin >> time;
		book.show(time - 1);
		int seat; string name;
		cout << "좌석번호 >> "; cin >> seat;
		cout << "이름입력 >> "; cin >> name;
		book.cancel(time - 1, seat - 1);
	}

	static void showAll() {
		for (int i = 0; i < 3; i++) book.show(i);
	}
};

int Console::menu = 0;
int Console::time = 0;
AirlineBook Console::book;

int main() {
	Console::run();
	return 0;
}
