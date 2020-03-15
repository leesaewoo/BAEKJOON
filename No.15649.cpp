#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	int* checkIndex = new int[N]{};

	for(int a = 0 ; a < N ; a++) {
		checkIndex[a] = 1;
		if(M >= 2) {
			for(int b = 0 ; b < N ; b++) {
				if(checkIndex[b] == 0) {
					checkIndex[b] = 1;
					if(M >= 3) {
						for(int c = 0 ; c < N ; c++) {
							if(checkIndex[c] == 0) {
								checkIndex[c] = 1;
								if(M >= 4) {
									for(int d = 0 ; d < N ; d++) {
										if(checkIndex[d] == 0) {
											checkIndex[d] = 1;
											if(M >= 5) {
												for(int e = 0 ; e < N ; e++) {
													if(checkIndex[e] == 0) {
														checkIndex[e] = 1;
														if(M >= 6) {
															for(int f = 0 ; f < N ; f++) {
																if(checkIndex[f] == 0) {
																	checkIndex[f] = 1;
																	if(M >= 7) {
																		for(int g = 0 ; g < N ; g++) {
																			if(checkIndex[g] == 0) {
																				checkIndex[g] = 1;
																				if(M >= 8) {
																					for(int h = 0 ; h < N ; h++) {
																						if(checkIndex[h] == 0) {
																							printf("%d %d %d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1, g + 1, h + 1);
																						}
																					}
																				}
																				else {
																					printf("%d %d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1, g + 1);
																				}
																				checkIndex[g] = 0;
																			}
																		}
																	}
																	else {
																		printf("%d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1);
																	}
																	checkIndex[f] = 0;
																}
															}
														}
														else {
															printf("%d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1);
														}
														checkIndex[e] = 0;
													}
												}
											}
											else {
												printf("%d %d %d %d\n", a + 1, b + 1, c + 1, d + 1);
											}
											checkIndex[d] = 0;
										}
									}
								}
								else {
									printf("%d %d %d\n", a + 1, b + 1, c + 1);
								}
								checkIndex[c] = 0;
							}
						}
					}
					else {
						printf("%d %d\n", a + 1, b + 1);
					}
					checkIndex[b] = 0;
				}
			}
		}
		else {
			printf("%d\n", a + 1);
		}
		checkIndex[a] = 0;
	}

	system("pause");

	return 0;
}