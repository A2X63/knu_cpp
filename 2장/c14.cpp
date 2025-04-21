#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char coffee[100];
    int num;
    int total = 0;

    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

    while (total < 20000) {
        cout << "주문>> ";
        cin >> coffee >> num;

        int price = 0;

        if (strcmp(coffee, "에스프레소") == 0)
            price = 2000;
        else if (strcmp(coffee, "아메리카노") == 0)
            price = 2300;
        else if (strcmp(coffee, "카푸치노") == 0)
            price = 2500;
        else {
            cout << "메뉴에 없는 커피입니다. 다시 주문하세요!\n";
            continue;
        }

        int orderTotal = price * num;
        total += orderTotal;

        cout << orderTotal << "원입니다. 맛있게 드세요\n\n";
    }

    cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~";

    return 0;
}
