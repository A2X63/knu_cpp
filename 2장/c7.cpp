#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[50];

    while (true) {
        cout << "종료하고싶으면 yes를 입력하세요>> ";
        cin.getline(input, 50);

        if (strcmp(input, "yes") == 0) {
            cout << "종료합니다...";
            break;
        }
    }

    return 0;
}
