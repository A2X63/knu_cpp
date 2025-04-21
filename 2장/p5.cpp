#include <iostream>
using namespace std;
int main() {
    char str[101];
    int count = 0;

    cout << "문자들을 입력하라(100자 미만): ";
    cin.getline(str, 101);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'x')
            count++;
    }

    cout << "x의 개수는 " << count;
}
