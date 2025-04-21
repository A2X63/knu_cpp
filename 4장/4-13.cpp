#include<iostream>
#include<string>
using namespace std;

class Histogram {
	string text;
	int count[26],sum=0;
public:
	Histogram(string text) {
		this->text = text;
	}
	void put(string text) {
		this->text.append(text);
	}
	void putc(char c) {
		char cs[] = {c,'\0'};
		text.append(cs);
	}
	void print() {
	
		for (int i = 0; i < text.length(); i++) {
			count[i] = 0;
			if (isalpha(text[i])) {
				char c = tolower(text[i]);
				count[c-'a']++;
			}
			sum += count[i];
	}
	
		cout << text<<endl;
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << sum << endl;
		for (int i = 0; i < 26; i++) {
			cout << ('a' + i) << '( ' << count[i] << ") :";
				for (int j = 0; j<count[i]; j++) {
					cout << '*';
			}
			cout << endl;
		}
	}
};
int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help,");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}