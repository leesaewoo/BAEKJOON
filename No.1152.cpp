#include <iostream>
#include <string>

using namespace std;

int NumOfWord(string str) {
	int cnt = 0;

	for(int i = 0 ; i < str.size() ; i++) {
		if(i == 0 && str[i] != ' ') {
			cnt++;
		}
		else if(str[i] == ' ' && i != str.size() - 1) {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	string str;

	getline(cin, str);

	cout << NumOfWord(str) << endl;

	system("pause");
}