#include <iostream>
#include <string>

using namespace std;

int Decomposing(int num) {
	string allNumber = to_string(num);
	int result = num;

	for(int i = 0 ; i < allNumber.size() ; i++) {
		result += ((int)allNumber[i]) - 48;
	}

	return result;
}

int main() {
	int num;
	cin >> num;

	int min = num;

	for(int i = 1 ; i < num ; i++) {
		if(num == Decomposing(i) && min > i) {
			min = i;
		}
	}
	if(min == num) {
		cout << "0" << endl;
	}
	else {
		cout << min << endl;
	}
	
	system("pause");
}