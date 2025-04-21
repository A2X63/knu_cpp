#include<iostream>
#include<string>
using namespace std;
class Person {
	string name;
public:
	Person() { this->name = "yas"; }
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) {
		this->name = name;
	}
};

class Family {
	Person* p;
	int size;
	string name;
public:
	Family(string name, int size) {
		this->name = name;
		this->p = new Person[size];
		this->size = size;
	}
	void setName(int i, string name) {
		(p + i)->setName(name);
	}
	void show() {
		cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";
		for (int i = 0; i < size; i++) {
			cout << (p + i)->getName() << "\t";;
		}
	}
	~Family() {
		delete[] p;
	}
};

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. SImpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}