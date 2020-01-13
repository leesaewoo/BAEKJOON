#include <iostream>

using namespace std;

int BlackJack(int numOfCard, int reqNum, int* &(card)) {
	int sum;
	int result = 0;

	for(int i = 0 ; i < numOfCard - 2 ; i++) {
		for(int j = i + 1 ; j < numOfCard - 1 ; j++) {
			for(int k = j + 1 ; k < numOfCard ; k++) {
				sum = card[i] + card[j] + card[k];

				if(reqNum - sum >= 0 && reqNum - sum < reqNum - result) {
					result = sum;
				}
			}
		}
	}

	return result;
}

int main() {
	int numOfCard;
	int reqNum;

	cin >> numOfCard >> reqNum;

	int* card = new int[numOfCard];

	for(int i = 0 ; i < numOfCard ; i++) {
		cin >> *(card + i);
	}

	cout << BlackJack(numOfCard, reqNum, card) << endl;

	system("pause");
}