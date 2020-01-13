#include <iostream>

using namespace std;

void Fibonacci(int num, int &result) {
	if(num == 0) {
		result += 0;
	}
	else if(num == 1) {
		result += 1;
	}
	else if(num >= 2) {
		Fibonacci(num - 2, result);
		Fibonacci(num - 1, result);
	}
}

int main() {
	int num;
	int result = 0;

	cin >> num;

	Fibonacci(num, result);

	cout << result << endl;

	system("pause");
}