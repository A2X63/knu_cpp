#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }

    bool operator>(const Circle& other) {
        return this->radius > other.radius;
    }
};

template <class T>
T bigger(T a, T b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << a << "과 " << b << "중 큰 값은 " << c << endl;

    Circle waffle(10), pizza(20);
    Circle y = bigger(waffle, pizza);
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;

    return 0;
}
