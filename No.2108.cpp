//https://www.acmicpc.net/problem/2108

#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

double Average(double sum, double N) {
	return floor((sum / N) + 0.5);
}

int main() {

	int N, inputInt;
	scanf("%d", &N);
	
	vector<int> v;

	int sum = 0;
	int chkArr[8001];
	fill_n(chkArr, 8001, 0);

	for(int i = 0 ; i < N ; i++) {
		scanf("%d", &inputInt);
		v.push_back(inputInt);
		sum += inputInt;
		chkArr[inputInt + 4000]++;
	}

	printf("%.0f\n", Average((double)sum, (double)N));

	sort(v.begin(), v.end());

	printf("%d\n", v[(N - 1) / 2]);

	int chkIndex = 0;
	int chkValue = 0;
	int chk = 0;
	int mode;

	for(int i = 0 ; i < 8001 ; i++) {
		if(chkArr[i] > 0) {
			if(chkValue < chkArr[i]) {
				chkIndex = i;
				chkValue = chkArr[i];
				chk = 0;
			}
			else if(chkValue == chkArr[i] && chk == 0) {
				chk++;
				mode = i - 4000;
			}
			else if(chkValue == chkArr[i] && chk != 0) {
				chk++;
			}
		}
	}

	if(chk == 0) {
		printf("%d\n", chkIndex - 4000);
	}
	else {
		printf("%d\n", mode);
	}

	printf("%d", v[N - 1] - v[0]);

	system("pause");
}