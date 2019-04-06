#include <stdio.h>
#include <stdlib.h>


int *pa;
void BUFFERCLEAR(void);
void QUICKSORT(int piv);

int main(void)
{
	int N;
	scanf("%d", &N); BUFFERCLEAR;
	
	pa = malloc(sizeof(int) * N);
	
	int i;
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &*(pa + i));
		BUFFERCLEAR;
	}
	
	// check
	for(i = 0 ; i < N ; i++)
	{
		printf("*(pa + %d) = %d\n", i, *(pa + i));
	}
	// check
	
	QUICKSORT();
	
	return 0;
}

void BUFFERCLEAR(void)
{
	while(getchar() != '\n');
}

void QUICKSORT(int piv)
{
	
}
