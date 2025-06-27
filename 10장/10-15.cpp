#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int choice, score;
	string name;
	map<string, int> scores;

	cout << "***** 점수관리 프로그램 HIGH SCORE를 시작합니다! *****\n";

	while (true) {
		cout << "입력 : 1, 조회 : 2, 종료 : 3 >> ";
		cin >> choice;

		if (choice == 1) {
			cout << "이름과 점수 >> ";
			cin >> name >> score;
			if (name != "") scores[name] = score;
		}

		else if (choice == 2) {
			cout << "이름 >> ";
			cin.ignore(); // cin과 getline 혼용 대비
			getline(cin, name);

			if (name == "") {
				if (scores.empty()) continue;
				string top;
				int max = -1;
				for (auto it = scores.begin(); it != scores.end(); it++) {
					if (it->second > max) {
						max = it->second;
						top = it->first;
					}
				}
				cout << "최고의 점수는 " << top << " " << max << endl;
			}
			else {
				if (scores.count(name)) {
					cout << name << "의 점수는 " << scores[name] << endl;
				}
				else {
					cout << name << "은(는) 없습니다." << endl;
				}
			}
		}

		else if (choice == 3) {
			cout << "프로그램을 종료합니다.." << endl;
			break;
		}
	}

	return 0;
}
