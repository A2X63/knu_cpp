#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50];
    char str2[50];

    cout << "새 암호를 입력하세요>> ";
    cin.getline(str1, 50);

    cout << "새 암호를 다시 한 번 입력하세요>> ";
    cin.getline(str2, 50);

    if (strcmp(str1, str2) == 0)
        cout << "같습니다.";
    else
        cout << "같지 않습니다.";
}
