#include <iostream>

using namespace std;

int IsPrimeNum(int num) {
	if(num == 1) {
		return 0;
	}

	for(int i = 2 ; i < num ; i++) {
		if(num % i == 0) {
			return 0;
		}
	}

	return num;
}

int main() {
	int minNum, maxNum, minPrime;
	int sumOfPrime = 0;
	int chk = 0;
	cin >> minNum >> maxNum;

	for(int i = minNum ; i < maxNum + 1 ; i++) {
		if(IsPrimeNum(i) != 0 && chk == 0) {
			sumOfPrime += IsPrimeNum(i);
			minPrime = i;
			chk = 1;
		}
		else if(IsPrimeNum(i) != 0) {
			sumOfPrime += IsPrimeNum(i);
		}
	}

	if(sumOfPrime == 0) {
		cout << -1 << endl;
	}
	else {
		cout << sumOfPrime << endl;
		cout << minPrime << endl;
	}
	system("pause");
}