#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char names[5][100];
    char longestName[100] = "";
    int maxLength = 0;

    cout << "5명의 이름을 ';'으로 구분하여 입력하세요>> ";

    for (int i = 0; i < 5; i++) {
        cin.getline(names[i], 100, ';');
    }

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << names[i] << '\n';

        int length = strlen(names[i]);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestName, names[i]);
        }
    }

    cout << "가장 긴 이름은 " << longestName;
}

    