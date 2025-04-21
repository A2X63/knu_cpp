#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }

    Date(string dateStr) {
        int firstSlash = dateStr.find('/');
        int secondSlash = dateStr.find('/', firstSlash + 1);
        year = stoi(dateStr.substr(0, firstSlash));
        month = stoi(dateStr.substr(firstSlash + 1, secondSlash - firstSlash - 1));
        day = stoi(dateStr.substr(secondSlash + 1));
    }

    void show() {
        cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
    }

    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
};

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");

    independenceDay.show();
    cout << birth.getYear() << ','
        << birth.getMonth() << ','
        << birth.getDay() << endl;
}
