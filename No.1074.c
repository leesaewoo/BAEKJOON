#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void z_search(int N, int x, int y, int **pa);
int counter = 0;

int main(void)
{
	int N, r, c;
	scanf("%d", &N);
	scanf("%d", &r);
	scanf("%d", &c); getchar();
	
	int **pa = (int**)malloc(sizeof(int*) * pow(2, N));
	int i;
	for(i = 0 ; i < pow(2, N) ; i++)
	{
		*(pa + i) = (int*)malloc(sizeof(int) * pow(2, N));
	}
	
	z_search(N, 0, 0, pa);
	
	printf("%d\n", *(*(pa + r) + c));
	
	for(i = 0 ; i < pow(2, N) ; i++)
	{
		free(*(pa + i));
	}
	return 0;
}

void z_search(int N, int x, int y, int **pa)
{
	if(N == 1)
	{
		*(*(pa + x) + y) = counter;
		counter++;
		*(*(pa + x) + y + 1) = counter;
		counter++;
		*(*(pa + x + 1) + y) = counter;
		counter++;
		*(*(pa + x + 1) + y + 1) = counter;
		counter++;
	}
	else
	{
		z_search(N - 1, x, y, pa);
		z_search(N - 1, x, y + pow(2, N - 1), pa);
		z_search(N - 1, x + pow(2, N - 1), y, pa);
		z_search(N - 1, x + pow(2, N - 1), y + pow(2, N - 1), pa);
	}
}
