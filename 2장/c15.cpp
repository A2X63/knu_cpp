#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char buf[10000];
    int freq[26] = {0};

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cin.getline(buf, 10000, ';');

    for (int i = 0; buf[i] != '\0'; i++) {
        char c = tolower(buf[i]);
        if (isalpha(c))
            freq[c - 'a']++;
    }

    int total = 0;
    for (int i = 0; i < 26; i++) {
        total += freq[i];
    }

    cout << "총 알파벳 수 " << total << "\n";

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << (char)(i + 'a') << " (" << freq[i] << ") ";
            for (int j = 0; j < freq[i]; j++) cout << "*";
            cout << "\n";
        }
    }
}
