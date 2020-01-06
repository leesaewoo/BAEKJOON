#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
	long long ans = 0;

	for(int i = 0 ; i < a.size() ; i++) {
		ans += a[i];
	}

	return ans;
}

int main() {
	vector<int> a;
	int numOfInt, tmp;

	cin >> numOfInt;

	for(int i = 0 ; i < numOfInt ; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}

	cout << sum(a) << endl;

	system("pause");
}
