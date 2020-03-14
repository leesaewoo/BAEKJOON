#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int N;
	unsigned int K;
	scanf("%d %d", &N, &K);
	unsigned int* A = new unsigned int[N];
	int* check = new int[N];

	for(int i = 0 ; i < N ; i++) {
		scanf("%d", &A[i]);
		if(A[i] == K) {
			check[i] = 1;
		}
	}

	int M;
	scanf("%d", &M);

	int queryHead, l, r;
	unsigned int x;

	for(int i = 0 ; i < M ; i++) {
		scanf("%d", &queryHead);

		if(queryHead == 1) {
			scanf("%d %d %d", &l, &r, &x);

			for(int i = l - 1 ; i < r ; i++) {
				A[i] = A[i] | x;
				if(check[i] == 1) {
					if(A[i] != K) {
						check[i] = 0;
					}
				}
				else {
					if(A[i] == K) {
						check[i] = 1;
					}
				}
			}
		}
		else if(queryHead == 2) {
			scanf("%d %d", &l, &r);

			int count = 0;

			for(int i = l - 1 ; i < r ; i++) {
				if(check[i] == 1) {
					count++;
				}
			}

			printf("%d\n", count);
		}
	}

	system("pause");

	return 0;
}