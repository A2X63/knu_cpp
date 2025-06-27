#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores;
    cout << "***** 점수관리 프로그램 HIGH SCORE를 시작합니다! *****\n";

    while (true) {
        int cmd;
        cout << "입력:1, 조회:2, 종료:3 >> ";
        cin >> cmd;

        if (cmd == 1) {
            string name;
            int score;
            cout << "이름과 점수 >> ";
            cin.ignore();
            getline(cin, name);
            if (name.empty()) continue;
            cin >> score;
            scores[name] = score;
        }

        else if (cmd == 2) {
            string name;
            cout << "이름 >> ";
            cin.ignore();
            getline(cin, name);
            if (name.empty()) {
                if (scores.empty()) continue;

                auto it = scores.begin();
                string topName = it->first;
                int topScore = it->second;

                for (auto& p : scores) {
                    if (p.second > topScore) {
                        topScore = p.second;
                        topName = p.first;
                    }
                }

                cout << "최고의 점수는 " << topName << " " << topScore << endl;
            }
            else {
                if (scores.count(name))
                    cout << name << "의 점수는 " << scores[name] << endl;
                else
                    cout << name << "은(는) 없습니다." << endl;
            }
        }

        else if (cmd == 3) {
            cout << "프로그램을 종료합니다..." << endl;
            break;
        }
    }

    return 0;
}
