#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    int coffee;
    int water;
    int sugar;

public:
    CoffeeMachine(int c, int w, int s) {
        coffee = c;
        water = w;
        sugar = s;
    }

    void drinkEspresso() {
        coffee -= 1;
        water -= 1;
    }

    void drinkAmericano() {
        coffee -= 1;
        water -= 2;
    }

    void drinkSugarCoffee() {
        coffee -= 1;
        water -= 1;
        sugar -= 1;
    }

    void fill() {
        coffee = 10;
        water = 10;
        sugar = 10;
    }

    void show() {
        cout << "커피 머신 상태, 커피:" << coffee
            << " 물:" << water
            << " 설탕:" << sugar << endl;
    }
};

int main() {
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}
