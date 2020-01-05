#include <iostream>

using namespace std;

int main() {
	int num;
	int chkSame[42] = { 0 };
	int cnt = 0;

	for(int i = 0 ; i < 10 ; i++) {
		cin >> num;
		chkSame[num % 42]++;
	}

	for(int i = 0 ; i < 42 ; i++) {
		if(chkSame[i] != 0) {
			cnt++;
		}
	}

	cout << cnt << endl;

	system("pause");
}