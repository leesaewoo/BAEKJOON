#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

double Average(int num, int* &intArray) {
	double sum = 0;

	for(int i = 0 ; i < num ; i++) {
		sum += (double)intArray[i];
	}

	if(round(sum / (double)num) == -0) {
		return 0;
	}
	else {
		return round(sum / (double)num);
	}
}

int Compare(const void *a, const void *b) {
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if(num1 > num2) {
		return 1;
	}
	else if(num1 < num2) {
		return -1;
	}
	else {
		return 0;
	}
}

int Mode(int num, int* &intArray) {
	short chkNum[8001] = { 0 };
	for(int i = 0 ; i < num ; i++) {
		chkNum[intArray[i] + 4000]++;
	}

	int max = 0;
	int index;
	for(int i = 0 ; i < 8001 ; i++) {
		if(max < chkNum[i]) {
			max = chkNum[i];
			index = i;
		}
	}

	int cnt = 0;
	for(int i = 0 ; i < 8001 ; i++) {
		if(max == chkNum[i]) {
			cnt++;
			if(cnt == 2) {
				return i - 4000;
			}
		}
	}

	return index - 4000;
}

int main() {
	int num;
	cin >> num;

	int* intArray = new int[num];
	for(int i = 0 ; i < num ; i++) {
		cin >> intArray[i];
	}

	cout << Average(num, intArray) << endl;

	qsort(intArray, num, sizeof(int), Compare);

	cout << intArray[((num + 1) / 2) - 1] << endl;

	cout << Mode(num, intArray) << endl;

	cout << intArray[num - 1] - intArray[0] << endl;

	system("pause");
}