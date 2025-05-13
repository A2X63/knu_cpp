#include <iostream>
using namespace std;

class BaseMemory {
    char* mem;
protected:
    BaseMemory(int size) { mem = new char[size]; }
    virtual ~BaseMemory() { delete[] mem; }
    char  getAt(int idx) const { return mem[idx]; }
    void  putAt(int idx, char v) { mem[idx] = v; }
};

class ROM : public BaseMemory {
public:
    ROM(int size, const char* initData, int len)
        : BaseMemory(size)
    {
        for (int i = 0; i < len; ++i) putAt(i, initData[i]);
    }
    char read(int idx) const { return getAt(idx); }
};

class RAM : public BaseMemory {
public:
    RAM(int size) : BaseMemory(size) {}
    void write(int idx, char v) { putAt(idx, v); }
    char read(int idx) const { return getAt(idx); }
};

int main() {
    char x[5] = { 'h','e','l','l','o' };
    ROM  biosROM(1024 * 10, x, 5);
    RAM  mainMemory(1024 * 1024);

    for (int i = 0; i < 5; ++i) mainMemory.write(i, biosROM.read(i));
    for (int i = 0; i < 5; ++i) cout << mainMemory.read(i);
}
