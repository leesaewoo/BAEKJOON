#include <iostream>

using namespace std;

class Rank {
public :
	Rank(int numOfPeople) : numOfPeople(numOfPeople) { }

	void SetStat() {
		for(int i = 0 ; i < numOfPeople ; i++) {
			cin >> tall[i] >> weight[i];
		}
	}

	void Ranking() {
		int chk;

		for(int i = 0 ; i < numOfPeople ; i++) {
			chk = 1;

			for(int j = 0 ; j < numOfPeople ; j++) {
				if(i != j && tall[i] < tall[j] && weight[i] < weight[j]) {
					chk++;
				}
			}

			cout << chk;

			if(i != numOfPeople - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}

private :
	int numOfPeople;
	int* tall = new int[numOfPeople];
	int* weight = new int[numOfPeople];
};

int main() {
	int numOfPeople;

	cin >> numOfPeople;

	Rank R(numOfPeople);

	R.SetStat();

	R.Ranking();

	system("pause");
}