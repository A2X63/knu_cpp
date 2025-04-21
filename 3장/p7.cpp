#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
private:
    bool even;

public:
    SelectableRandom(bool evenMode) {
        even = evenMode;
        srand((unsigned)time(0));
    }

    int next() {
        int n;
        do {
            n = rand();
        } while ((n % 2 == 0) != even);
        return n;
    }

    int nextInRange(int a, int b) {
        int n;
        do {
            n = rand() % (b - a + 1) + a;
        } while ((n % 2 == 0) != even);
        return n;
    }
};

int main() {
    SelectableRandom evenRand(true);
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << evenRand.next() << ' ';
    }
    cout << endl;

    SelectableRandom oddRand(false);
    cout << "-- 2에서 9까지의 랜덤 홀수 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << oddRand.nextInRange(2, 9) << ' ';
    }
    cout << endl;
}
