#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string name;
    int id;
    int balance;

public:
    Account(string n, int i, int b) {
        name = n;
        id = i;
        balance = b;
    }

    void deposit(int amount) {
        balance += amount;
    }

    int withdraw(int amount) {
        balance -= amount;
        return amount;
    }

    int inquiry() {
        return balance;
    }

    string getOwner() {
        return name;
    }
};

int main() {
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

    int money = a.withdraw(20000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}
