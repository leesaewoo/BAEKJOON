#include <iostream>

using namespace std;

class Point {
public :
	void GetPoint_1(int x, int y) {
		this->x_1 = x;
		this->y_1 = y;
	}
	void GetPoint_2(int x, int y) {
		this->x_2 = x;
		this->y_2 = y;
	}
	void GetPoint_3(int x, int y) {
		this->x_3 = x;
		this->y_3 = y;
	}

	void Find4thPoint() {
		int x_4, y_4;

		if(abs(x_1 - x_2) + abs(y_1 - y_2) > abs(x_1 - x_3) + abs(y_1 - y_3)) {
			if(abs(x_1 - x_2) + abs(y_1 - y_2) > abs(x_2 - x_3) + abs(y_2 - y_3)) {
				//1-2
				x_4 = x_1 + x_2 - x_3;
				y_4 = y_1 + y_2 - y_3;
			}
			else {
				//2-3
				x_4 = x_2 + x_3 - x_1;
				y_4 = y_2 + y_3 - y_1;
			}
		}
		else if(abs(x_1 - x_3) + abs(y_1 - y_3) > abs(x_2 - x_3) + abs(y_2 - y_3)) {
			//1-3
			x_4 = x_1 + x_3 - x_2;
			y_4 = y_1 + y_3 - y_2;
		}
		else {
			//2-3
			x_4 = x_2 + x_3 - x_1;
			y_4 = y_2 + y_3 - y_1;
		}

		cout << x_4 << " " << y_4 << endl;
	}

private :
	int x_1, x_2, x_3, y_1, y_2, y_3;
};

int main() {
	Point p;
	int x, y;

	cin >> x >> y;
	p.GetPoint_1(x, y);

	cin >> x >> y;
	p.GetPoint_2(x, y);

	cin >> x >> y;
	p.GetPoint_3(x, y);

	p.Find4thPoint();

	system("pause");
}