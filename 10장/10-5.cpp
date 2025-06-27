#include <iostream>
using namespace std;

template <typename T>
T* concat(const T a[], int na, const T b[], int nb) {
    T* res = new T[na + nb];
    for (int i = 0; i < na; ++i) res[i] = a[i];
    for (int i = 0; i < nb; ++i) res[na + i] = b[i];
    return res;
}

int main() {
    int  ai[] = { 1,2,3 };      int  bi[] = { 4,5 };
    char ac[] = { 'H','i' };    char bc[] = { '!','!' };

    int* ci = concat(ai, 3, bi, 2);
    char* cc = concat(ac, 2, bc, 2);

    for (int i = 0; i < 5; ++i) cout << ci[i] << ' ';   cout << endl;
    for (int i = 0; i < 4; ++i) cout << cc[i];          cout << endl;

    delete[] ci;
    delete[] cc;
    return 0;
}
