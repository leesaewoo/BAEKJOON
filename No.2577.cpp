#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int num, mul;

	cin >> mul;

	for (int i = 0; i < 2; i++) {
		cin >> num;
		mul *= num;
	}

	string mulString = to_string(mul);

	int cntNum[10] = { 0 };

	for (int i = 1; i <= mulString.size() ; i++) {
		cntNum[(int)mulString[mulString.size() - i] - 48]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << cntNum[i] << endl;
	}
	system("pause");
}