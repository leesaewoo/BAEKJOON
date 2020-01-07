#include <iostream>

using namespace std;

int GetBigNum(int a, int b) {
	int backward_a = ((a % 10) * 100) + ((a % 100) - (a % 10)) + (int)(a / 100);
	int backward_b = ((b % 10) * 100) + ((b % 100) - (b % 10)) + (int)(b / 100);

	if(backward_a > backward_b) {
		return backward_a;
	}
	else {
		return backward_b;
	}
}


int main() {
	int a, b;

	cin >> a >> b;

	cout << GetBigNum(a, b) << endl;

	system("pause");
}