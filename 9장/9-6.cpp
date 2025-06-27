#include <iostream>
using namespace std;

class AbstractStack {
public:
    virtual bool push(int n) = 0;
    virtual bool pop(int& n) = 0;
    virtual int size() = 0;
};

class IntStack : public AbstractStack {
    int arr[10];
    int top;

public:
    IntStack() : top(0) {}

    bool push(int n) override {
        if (top >= 10) return false;
        arr[top++] = n;
        return true;
    }

    bool pop(int& n) override {
        if (top <= 0) return false;
        n = arr[--top];
        return true;
    }

    int size() override {
        return top;
    }
};

int main() {
    IntStack s;
    int val;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Size: " << s.size() << endl;

    while (s.pop(val))
        cout << "Popped: " << val << endl;

    cout << "Size: " << s.size() << endl;

    return 0;
}
