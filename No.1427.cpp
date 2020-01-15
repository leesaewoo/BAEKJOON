#include <iostream>
#include <string>

using namespace std;

int R_Compare(const void *a, const void *b) {
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if(num1 > num2) {
		return -1;
	}
	else if(num1 < num2) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	string str;
	cin >> str;

	int* num = new int[str.size()];
	for(int i = 0 ; i < str.size() ; i++) {
		num[i] = str[i] - 48;
	}

	qsort(num, str.size(), sizeof(int), R_Compare);

	for(int i = 0 ; i < str.size() ; i++) {
		cout << num[i];
	}

	system("pause");
}