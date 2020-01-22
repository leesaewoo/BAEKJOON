#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

int Partition(int* &(x), int* &(y), int left, int right) {
	srand((unsigned int)time(NULL));
	int pivot_index = rand() % (right + 1);
	if(pivot_index < left) {
		pivot_index = left;
	}

	int pivot_x = x[pivot_index];
	int pivot_y = y[pivot_index];
	int i_1 = left - 1; // i = pivot indicator
	int tmp;

	for(int j = left ; j <= pivot_index - 1 ; j++) {
		if(x[j] < pivot_x) {
			i_1++;

			tmp = x[j];
			x[j] = x[i_1];
			x[i_1] = tmp;

			tmp = y[j];
			y[j] = y[i_1];
			y[i_1] = tmp;
		}
		else if(x[j] == pivot_x) {
			if(y[j] < pivot_y) {
				i_1++;

				tmp = x[j];
				x[j] = x[i_1];
				x[i_1] = tmp;

				tmp = y[j];
				y[j] = y[i_1];
				y[i_1] = tmp;
			}
		}
	}

	tmp = pivot_x;
	x[pivot_index] = x[i_1 + 1];
	x[i_1 + 1] = tmp;
	tmp = pivot_y;		y[pivot_index] = y[i_1 + 1];
	y[i_1 + 1] = tmp;

	pivot_index = i_1 + 1;
	pivot_x = x[pivot_index];
	pivot_y = y[pivot_index];

	int i_2 = right + 1;

	for(int j = right ; j >= pivot_index + 1 ; j--) {
		if(x[j] > pivot_x) {
			i_2--;

			tmp = x[j];
			x[j] = x[i_2];
			x[i_2] = tmp;

			tmp = y[j];
			y[j] = y[i_2];
			y[i_2] = tmp;
		}
		else if(x[j] == pivot_x) {
			if(y[j] > pivot_y) {
				i_2--;

				tmp = x[j];
				x[j] = x[i_2];
				x[i_2] = tmp;

				tmp = y[j];
				y[j] = y[i_2];
				y[i_2] = tmp;
			}
		}
	}
	
	tmp = pivot_x;
	x[pivot_index] = x[i_2 - 1];
	x[i_2 - 1] = tmp;
	tmp = pivot_y;
	y[pivot_index] = y[i_2 - 1];
	y[i_2 - 1] = tmp;

	return i_2 - 1;
}

void PointSort(int* &(x), int* &(y), int left, int right) {
	//using quick sort(right)
	if(left < right) {
		int pivot = Partition(x, y, left, right);

		PointSort(x, y, left, pivot - 1);
		PointSort(x, y, pivot + 1, right);
	}
}



int main() {
	int numOfPoint;
	cin >> numOfPoint;

	int* x = new int[numOfPoint];
	int* y = new int[numOfPoint];

	for(int i = 0 ; i < numOfPoint ; i++) {
		//cin.tie(NULL);
		//cin >> x[i] >> y[i];
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
	}

	PointSort(x, y, 0, numOfPoint - 1);

	for(int i = 0 ; i < numOfPoint ; i++) {
		//cout << x[i] << " " << y[i] << "\n";
		printf("%d %d\n", x[i], y[i]);
	}

	system("pause");
}