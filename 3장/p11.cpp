? 문제 11.
제목: 선언부와 구현부를 나누기 연습
내용 :
아래 코드는 Box 클래스의 선언부와 구현부가 한 파일에 작성되어 있다.
이 코드를 기반으로 Box.h, Box.cpp, main.cpp로 분리하라.
main() 함수는 main.cpp에 작성한다.
(난이도 7)

?? 코드 예시 :
cpp
복사
편집
#include <iostream>
using namespace std;

class Box {
    int width, height;
    char fill; // 박스 내부를 채우는 문자
public:
    Box(int w, int h) { setSize(w, h); fill = '*'; }
    void setFill(char f) { fill = f; }
    void setSize(int w, int h) { width = w; height = h; }
    void draw(); // 박스 그리기
};

void Box::draw() {
    for (int n = 0; n < height; n++) {
        for (int m = 0; m < width; m++) cout << fill;
        cout << endl;
    }
}

int main() {
    Box b(10, 2);
    b.draw();  // 박스를 그린다.
    cout << endl;
    b.setSize(7, 4);  // 박스의 크기를 변경한다.
    b.setFill('^');  // 내부를 '^'로 채운다.
    b.draw();  // 박스를 그린다.
}
??? 출력 결과 :
latex
복사
편집
**********
**********

^^^^^^^
^^^^^^^
^^^^^^^
^^^^^^^