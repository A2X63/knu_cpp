#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
    int year;
    string title, author;
public:
    Book(int y, string t, string a) : year(y), title(t), author(a) {}
    int getYear() const { return year; }
    string getAuthor() const { return author; }
    void show() const {
        cout << year << "년도, " << title << ", " << author << endl;
    }
};

int main() {
    vector<Book> v;
    while (true) {
        int y;
        string t, a;
        cout << "년도>>";
        cin >> y;
        if (y == -1) break;
        cin.ignore();
        cout << "책이름>>";
        getline(cin, t);
        cout << "저자>>";
        getline(cin, a);
        v.push_back(Book(y, t, a));
    }

    cout << "총 입력된 책은 " << v.size() << "권입니다." << endl;

    string searchAuthor;
    cout << "검색하고자 하는 저자 이름을 입력하세요>>";
    getline(cin, searchAuthor);
    for (auto& b : v)
        if (b.getAuthor() == searchAuthor) b.show();

    int searchYear;
    cout << "검색하고자 하는 년도를 입력하세요>>";
    cin >> searchYear;
    for (auto& b : v)
        if (b.getYear() == searchYear) b.show();

    return 0;
}
