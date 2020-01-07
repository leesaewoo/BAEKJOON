#include <iostream>

using namespace std;

int GetBreakEvenPoint(int A, int B, int C) {
	int breakEvenPoint;

	if(C <= B) {
		return -1;
	}

	breakEvenPoint = A / (C - B) + 1;

	return breakEvenPoint;
}

int main() {
	int A, B, C;

	cin >> A >> B >> C;

	cout << GetBreakEvenPoint(A, B, C) << endl;

	system("pause");
}