#include <iostream>
#include <math.h>

using namespace std;

class Location {
public :
	Location(int x1, int y1, int r1, int x2, int y2, int r2) {
		x_1 = x1;	y_1 = y1;	r_1 = r1;	x_2 = x2;	y_2 = y2;	r_2 = r2;
		between = sqrt(pow(abs(x_1 - x_2), 2) + pow(abs(y_1 - y_2), 2));
	}

	int GetDuplicate() {
		if(between == 0 && r_1 == r_2) {
			return -1;
		}
		else if(between == 0 && r_1 != r_2) {
			return 0;
		}
		else if(r_1 + r_2 == between) {
			return 1;
		}
		else if(r_1 + r_2 < between) {
			return 0;
		}
		else if(r_1 + r_2 > between && abs(r_1 - r_2) > between) {
			return 0;
		}
		else if(r_1 + r_2 > between && abs(r_1 - r_2) == between) {
			return 1;
		}
		else if(r_1 + r_2 > between && between > r_1 && between > r_2) {
			return 2;
		}
		else if(r_1 + r_2 > between && between < r_1 && between < r_2) {
			return 2;
		}
	}

private :
	int x_1, y_1, x_2, y_2, r_1, r_2;
	double between;
};

int main() {
	int testCase;
	int x1, y1, x2, y2, r1, r2;
	
	cin >> testCase;
	
	for(int i = 0 ; i < testCase ; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		Location L(x1, y1, r1, x2, y2, r2);
		cout << L.GetDuplicate() << endl;
	}
	system("pause");
}