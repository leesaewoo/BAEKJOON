#include <iostream>
#include <string>

using namespace std;

char FindAlphabet(string word) {
	int* chkAlphabet = new int[26]();

	for(int i = 0 ; i < word.size() ; i++) {
		if((int)word[i] >= 97) {
			chkAlphabet[((int)word[i]) - 97]++;
		}
		else {
			chkAlphabet[((int)word[i]) - 65]++;
		}
	}

	//search
	int max = 0;
	int index;
	int chk = 0;
	for(int i = 0 ; i < 26 ; i++) {
		if(chkAlphabet[i] != 0 && chkAlphabet[i] > max) {
			max = chkAlphabet[i];
			index = i;
		}

		if(i == 25) {
			for(int j = 0 ; j < 26 ; j++) {
				if(chkAlphabet[j] == max) {
					chk++;
				}
				
				if(chk == 2) {
					delete[] chkAlphabet;
					return '?';
				}
			}
		}
	}
	delete[] chkAlphabet;
	return (char)(index + 65);
}

int main() {
	string word;
	cin >> word;

	cout << FindAlphabet(word) << endl;

	system("pause");
}