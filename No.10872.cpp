#include <iostream>

using namespace std;

void Factorial(int num, int &result) {
	result *= num;
	
	if(num != 1) {
		Factorial(num - 1, result);
	}
}

int main() {
	int num;
	int result = 1;
	cin >> num;

	Factorial(num, result);

	cout << result << endl;

	system("pause");
}