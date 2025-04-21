#include <iostream>
#include <cstring>  // strlen() 사용을 위해 포함
using namespace std;

int main() {
    char str[100];  // 입력받을 문자열 (최대 99자 + 널 문자 포함)

    // 사용자 입력 받기
    cout << "문자열 입력>> ";
    cin.getline(str, 100);  // 한 줄 입력 받기

    // 부분 문자열 출력
    for (int i = 0; i < strlen(str); i++) {  // 문자열 길이만큼 반복
        for (int j = 0; j <= i; j++) {  // 현재 인덱스까지 출력
            cout << str[j];
        }
        cout << '\n';  // 개행 (줄바꿈)
    }
}
