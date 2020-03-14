#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int testCase;
	
	cin >> testCase;
	
	for(int i = 0 ; i < testCase ; i++) {
		int N, M;
		
		scanf("%d %d", &N, &M);
		
		if(N < 12 || M < 4) {
			printf("-1\n");
		}
		else {
			printf("%d\n", (11 * M) + 4);
		}
	}
	
	return 0;
}
