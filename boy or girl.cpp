 #include <iostream>
using namespace std;
#include<string.h> 
int main(void) {
	int acc = 0;
	string word;
	cin >> word;
	for (int i = 0; i <= word.size(); i++) {
		for (int x = 0; x <= word.size(); x++) {
			if (x == i) {
				continue;
			}
			else if (word[i] == word[x]) {
				acc++;
			}
		}
	}
	if (acc % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else if (acc % 2 != 0) {
		cout << "IGNORE HIM!";
	}


}
