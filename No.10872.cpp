#include <iostream>

using namespace std;

int Factorial(int num) {
	int result = 1;

	for(int i = num ; i >= 1 ; i--) {
		result *= i;
	}

	return result;
}

int main() {
	int num;
	cin >> num;

	cout << Factorial(num) << endl;
	system("pause");
}