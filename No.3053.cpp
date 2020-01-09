#include <iostream>

using namespace std;

class Circle {
public :
	Circle(int r) {
		radius = r;
	}

	void GetCircleArea() {
		cout.precision(15);
		cout << radius * radius * pi << endl;
		cout << 2 * radius * radius << endl;
	}

private :
	int radius;
	double pi = 3.14159265358979;
};

int main() {
	int radius;
	cin >> radius;

	Circle C(radius);

	C.GetCircleArea();

	system("pause");
}