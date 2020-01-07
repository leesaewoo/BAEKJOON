#include <iostream>
#include <string>

using namespace std;

void ChkGroupWord(int &count, string word) {
	int chkAlphabet[26] = {0};

	for(int i = 0 ; i < word.size() ; i++) {
		if(i != word.size() - 1) {
			if(word[i] != word[i + 1]) {
				if(chkAlphabet[((int)word[i]) - 97] == 0) {
					chkAlphabet[((int)word[i]) - 97] = 1;
				}
				else if(chkAlphabet[((int)word[i]) - 97] == 1) {
					return;
				}
			}
		}
		else {
			if(chkAlphabet[((int)word[i]) - 97] == 1) {
				return;
			}
		}
	}
	count++;
}

int main() {
	int count = 0;
	int numOfWord;
	string word;

	cin >> numOfWord;

	for(int i = 0 ; i < numOfWord ; i++) {
		cin >> word;
		ChkGroupWord(count, word);
	}

	cout << count << endl;

	system("pause");
}