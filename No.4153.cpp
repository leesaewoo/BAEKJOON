#include <iostream>
#include <math.h>

using namespace std;

class Triangle {
public :
	Triangle(int side_1, int side_2, int side_3) {
		side1 = side_1;
		side2 = side_2;
		side3 = side_3;
	}

	void IsRightTriangle() {
		int side_bigger = 0;

		side_bigger = side1;
		if(side_bigger < side2) {
			side_bigger = side2;
			if(side_bigger < side3) {
				side_bigger = side3;
			}
		}
		else if(side_bigger < side3) {
			side_bigger = side3;
		}

		if(side_bigger == side1) {
			if(pow(side1, 2) == pow(side2, 2) + pow(side3, 2)) {
				cout << "right" << endl;
			}
			else {
				cout << "wrong" << endl;
			}
		}
		else if(side_bigger == side2) {
			if(pow(side2, 2) == pow(side1, 2) + pow(side3, 2)) {
				cout << "right" << endl;
			}
			else {
				cout << "wrong" << endl;
			}
		}
		else {
			if(pow(side3, 2) == pow(side1, 2) + pow(side2, 2)) {
				cout << "right" << endl;
			}
			else {
				cout << "wrong" << endl;
			}
		}
	}

private :
	int side1, side2, side3;
};


int main() {
	int side_1, side_2, side_3;


	while(true) {
		cin >> side_1 >> side_2 >> side_3;
		
		if(side_1 == 0 && side_2 == 0 && side_3 == 0) {
			break;
		}

		Triangle T(side_1, side_2, side_3);

		T.IsRightTriangle();
	}
	system("pause");
}