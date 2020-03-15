#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	int* checkIndex = new int[N] {};

	for(int a = 0 ; a < N ; a++) {
		if(M >= 2) {
			for(int b = 0 ; b < N ; b++) {
				if(M >= 3) {
					for(int c = 0 ; c < N ; c++) {
						if(M >= 4) {
							for(int d = 0 ; d < N ; d++) {
								if(M >= 5) {
									for(int e = 0 ; e < N ; e++) {
										if(M >= 6) {
											for(int f = 0 ; f < N ; f++) {
												if(M >= 7) {
													for(int g = 0 ; g < N ; g++) {
														if(M >= 8) {
															for(int h = 0 ; h < N ; h++) {
																printf("%d %d %d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1, g + 1, h + 1);
															}
														}
														else {
															printf("%d %d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1, g + 1);
														}
													}
												}
												else {
													printf("%d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1);
												}
											}
										}
										else {
											printf("%d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1);
										}
									}
								}
								else {
									printf("%d %d %d %d\n", a + 1, b + 1, c + 1, d + 1);
								}
							}
						}
						else {
							printf("%d %d %d\n", a + 1, b + 1, c + 1);
						}
					}
				}
				else {
					printf("%d %d\n", a + 1, b + 1);
				}
			}
		}
		else {
			printf("%d\n", a + 1);
		}
	}

	system("pause");

	return 0;
}