#include <iostream>
#include <string>

using namespace std;

void SumOfDigit(int num, int* &chk) {
	string str = to_string(num);
	int sum = num;

	for(int i = 0 ; i < str.size() ; i++) {
		sum += ((int)str[i]) - 48;
	}

	if(chk[sum] > 0) {
		return;
	}
	else if(sum <= 10000) {
		chk[sum]++;
		SumOfDigit(sum, chk);
	}
}

int main() {
	int* chk = new int[10001]();

	for(int i = 1 ; i <= 10000 ; i++) {
		SumOfDigit(i, chk);
	}

	for(int i = 1 ; i < 10000; i++) {
		if(chk[i] == 0) {
			cout << i << endl;
		}
	}
	
	delete[] chk;

	system("pause");
}
