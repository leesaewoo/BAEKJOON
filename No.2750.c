#include <stdio.h>
#include <stdlib.h>


int *pa;
void BUFFERCLEAR(void);
void MERGE(int N, int X);

int main(void)
{
	int N;
	scanf("%d", &N);
	
	pa = malloc(sizeof(int) * N);
	
	int i;
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &*(pa + i));
		BUFFERCLEAR;
	}
	
	
	
	
	return 0;
}

void BUFFERCLEAR(void)
{
	while(getchar() != '\n');
}

void MERGE(int N, int X)
{
	int A[X];
	int n;
	if(N % 2 == 1)
	{
		n = (N + 1) / 2;
	}
	else
	{
		n = N / 2;
	}
	
	if(n == 1)
	{
		//end
	}
	
	int ptr1 = 0;
	int ptr2 = 0;
	int i;
	for(i = 0 ; i < n ; i++)
	{
		ptr1 = i * X;
		ptr2 = ptr1 + (X / 2);
		// 포인터는 (X / 2) - 1 만큼만 이동 가능 
		
	}
}
