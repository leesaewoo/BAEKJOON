#include <iostream>

using namespace std;

int GetRoomNum(int H, int W, int N) {
	int forward, backward;
	int remainder = N % H;
	if(remainder == 0) {
		forward = H * 100;
	}
	else {
		forward = remainder * 100;
	}

	int quotient = (int)(N / H);
	cout << N / H << endl;
	if(remainder == 0) {
		backward = quotient;
	}
	else {
		backward = quotient + 1;
	}

	return forward + backward;
}

int main() {
	int testCase;
	int H, W, N;
	cin >> testCase;

	for(int i = 0 ; i < testCase ; i++) {
		cin >> H >> W >> N;
		cout << GetRoomNum(H, W, N) << endl;
	}
	system("pause");
}