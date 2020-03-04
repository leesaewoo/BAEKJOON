//https://www.acmicpc.net/problem/11650

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
	int x;
	int y;
};

bool compare(point a, point b) {
	if(a.x == b.x) {
		return a.y < b.y;
	}
	else {
		return a.x < b.x;
	}
}

int main() {
	int N;
	scanf("%d", &N);

	vector <point> vPoint(N);

	int x, y;
	for(int i = 0 ; i < N ; i++) {
		scanf("%d %d", &x, &y);
		vPoint[i].x = x;
		vPoint[i].y = y;
	}

	sort(vPoint.begin(), vPoint.end(), compare);

	for(int i = 0 ; i < N ; i++) {
		printf("%d %d\n", vPoint[i].x, vPoint[i].y);
	}
	
	system("pause");
}