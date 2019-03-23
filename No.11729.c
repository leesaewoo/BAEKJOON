#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void move_1(int N, int A, int B, int C);

int A = 1;
int B = 2;
int C = 3;

int main(void)
{
	int N;
	scanf("%d", &N);
	
	int T = pow(2, N) - 1;
	
	printf("%d\n", T);
	
	move(N, A, B, C);

	
	
	return 0;
}

void move(int N, int A, int B, int C)
{
	if(N == 1)
	{
		printf("%d %d\n", A, C);
	}
	else if(N != 0)
	{
		move(N - 1, A, C, B);
		printf("%d %d\n", A, C);
		move(N - 1, B, A, C);
	}
}
