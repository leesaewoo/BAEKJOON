#include <stdio.h>
#include <iostream>

using namespace std;

void SetArray(int* &checkIndex,int N, int x) {
	for(int i = x + 1 ; i < N ; i++) {
		checkIndex[i] = 0;
	}

	for(int i = 0 ; i <= x ; i++) {
		checkIndex[i] = 1;
	}
}

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	int* checkIndex = new int[N]{};

	for(int a = 0 ; a < N ; a++) {
		SetArray(checkIndex, N, a);

		if(M >= 2) {
			for(int b = 0 ; b < N ; b++) {
				if(checkIndex[b] == 0) {
					SetArray(checkIndex, N, b);
					if(M >= 3) {
						for(int c = 0 ; c < N ; c++) {
							if(checkIndex[c] == 0) {
								SetArray(checkIndex, N, c);
								if(M >= 4) {
									for(int d = 0 ; d < N ; d++) {
										if(checkIndex[d] == 0) {
											SetArray(checkIndex, N, d);
											if(M >= 5) {
												for(int e = 0 ; e < N ; e++) {
													if(checkIndex[e] == 0) {
														SetArray(checkIndex, N, e);
														if(M >= 6) {
															for(int f = 0 ; f < N ; f++) {
																if(checkIndex[f] == 0) {
																	SetArray(checkIndex, N, f);
																	if(M >= 7) {
																		for(int g = 0 ; g < N ; g++) {
																			if(checkIndex[g] == 0) {
																				SetArray(checkIndex, N, g);
																				if(M >= 8) {
																					for(int h = 0 ; h < N ; h++) {
																						if(checkIndex[h] == 0) {
																							printf("%d %d %d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1, g + 1, h + 1);
																						}
																						SetArray(checkIndex, N, g);
																					}
																				}
																				else {
																					printf("%d %d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1, g + 1);
																				}
																				SetArray(checkIndex, N, f);
																			}
																		}
																	}
																	else {
																		printf("%d %d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1, f + 1);
																	}
																	SetArray(checkIndex, N, e);
																}
															}
														}
														else {
															printf("%d %d %d %d %d\n", a + 1, b + 1, c + 1, d + 1, e + 1);
														}
														SetArray(checkIndex, N, d);
													}
												}
											}
											else {
												printf("%d %d %d %d\n", a + 1, b + 1, c + 1, d + 1);
											}
											SetArray(checkIndex, N, c);
										}
									}
								}
								else {
									printf("%d %d %d\n", a + 1, b + 1, c + 1);
								}
								SetArray(checkIndex, N, b);
							}
						}
					}
					else {
						printf("%d %d\n", a + 1, b + 1);
					}
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