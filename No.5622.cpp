#include <iostream>
#include <string>

using namespace std;

int GetDialTime(string word) {
	int time = 0;

	for(int i = 0 ; i < word.size() ; i++) {
		if((int)word[i] <= 67) {
			time += 3;
		}
		else if((int)word[i] <= 70) {
			time += 4;
		}
		else if((int)word[i] <= 73) {
			time += 5;
		}
		else if((int)word[i] <= 76) {
			time += 6;
		}
		else if((int)word[i] <= 79) {
			time += 7;
		}
		else if((int)word[i] <= 83) {
			time += 8;
		}
		else if((int)word[i] <= 86) {
			time += 9;
		}
		else if((int)word[i] <= 90) {
			time += 10;
		}
	}
	return time;
}

int main() {
	string word;

	cin >> word;

	cout << GetDialTime(word) << endl;

	system("pause");
}



//3段 = 65~67
//4段 = 68~70
//5段 = 71~73
//6段 = 74~76
//7段 = 77~79
//8段 = 80~83
//9段 = 84~86
//10段 = 87~90