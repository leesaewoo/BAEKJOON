#include <iostream>

using namespace std;

int GetDaysOfStickClimbing(int up, int down, int height) {
	int days;
	int quotient = (int)((height - down) / (up - down));
	cout << "quotient = " << quotient << endl;

	int remainder = (height - down) % (up - down);
	cout << "remainder = " << remainder << endl;
	if(remainder > 0) {
		days = quotient + 1;
		cout << "up" << endl;
	}
	else if(remainder == 0) {
		days = quotient;
		cout << "down" << endl;
	}
	return days;
}

int main() {
	int goUpAtDay, goDownAtNight, heightOfStick;

	cin >> goUpAtDay >> goDownAtNight >> heightOfStick;

	cout << GetDaysOfStickClimbing(goUpAtDay, goDownAtNight, heightOfStick) << endl;

	system("pause");
}