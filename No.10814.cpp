//https://www.acmicpc.net/problem/10814

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class user {
public :
	int age;
	string name;
	int rank;
};

bool compare(user a, user b) {
	
	if(a.age != b.age) {
		return a.age < b.age;
	}
	else if(a.age == b.age) {
		return a.rank < b.rank;
	}
}

int main() {
	int N;
	scanf("%d", &N);

	vector<user> vUser(N);

	int mAge;
	string mName;

	for(int i = 0 ; i < N ; i++) {
		cin >> mAge >> mName;
		vUser[i].age = mAge;
		vUser[i].name = mName;
		vUser[i].rank = i;
	}

	sort(vUser.begin(), vUser.end(), compare);

	for(int i = 0 ; i < N ; i++) {
		cout << vUser[i].age << " " << vUser[i].name << "\n"; // endl -> "\n"
	}

	system("pause");
}