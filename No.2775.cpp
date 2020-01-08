#include <iostream>

using namespace std;

void GetNumOfPeople(unsigned int k, unsigned int n, unsigned int &sum) {
	if(k == 0) {
		sum += n;
	}
	else {
		for(int i = 1 ; i <= n ; i++) {
			GetNumOfPeople(k - 1, i, sum);
		}
	}
}

int main() {
	unsigned int sum, k, n;
	unsigned long T;

	cin >> T;
	
	for(int i = 0 ; i < T ; i++) {
		cin >> k >> n;
		sum = 0;
		GetNumOfPeople(k, n, sum);
		cout << sum << endl;
	}
	system("pause");
}