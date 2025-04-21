#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
    EvenRandom() {
        srand((unsigned)time(0));
    }

    int next() {
        int n;
        do {
            n = rand();
        } while (n % 2 != 0);
        return n;
    }

    int nextInRange(int a, int b) {
        int n;
        do {
            n = rand() % (b - a + 1) + a;
        } while (n % 2 != 0);
        return n;
    }
};

int main() {
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << ' ';
    }
    cout << endl;

    cout << "-- 0에서 10까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(0, 10) << ' ';
    }
    cout << endl;
}
