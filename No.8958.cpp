#include <iostream>
#include <string>

using namespace std;

class GetScore {
public :
	void GetQuizResult(string quizResult) {
		this->quizResult = quizResult;
	}

	int GetQuizScore() {
		this->score = 0;
		this->sumOfScore = 0;

		for(int i = 0 ; i < quizResult.size() ; i++) {
			if(this->quizResult[i] == 'O') {
				this->score++;
				this->sumOfScore += this->score;
			}
			else if(this->quizResult[i] == 'X') {
				this->score = 0;
			}
		}
		return this->sumOfScore;
	}
private :
	string quizResult;
	int score = 0;
	int sumOfScore = 0;
};

int main() {
	int testCase;
	string quizResult;
	GetScore gs;

	cin >> testCase;

	for(int i = 0 ; i < testCase ; i++) {
		cin >> quizResult;
		gs.GetQuizResult(quizResult);
		cout << gs.GetQuizScore() << endl;
	}
	system("pause");
}