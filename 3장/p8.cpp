#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer(int val) { value = val; }
    Integer(string str) { value = stoi(str); }
    int get() { return value; }
    void set(int val) { value = val; }
    bool isEven() { return value % 2 == 0; }
};

int main() {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}
