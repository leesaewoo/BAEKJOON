#include <stdio.h>
#include <stdlib.h>

void star(int N, int x, int y, int **p);

int main(void)
{
	int N;
	scanf("%d", &N);
	
	int **p = (int**)malloc(sizeof(int*) * N);
	int i;
	for(i = 0 ; i < N ; i++)
	{
		*(p + i) = (int*)malloc(sizeof(int) * N);
	}
	
	star(N, 0, 0, p);
	
	int j;
	for(i = 0 ; i < N ; i++)
	{
		for(j = 0 ; j < N ; j++)
		{
			if(*(*(p + i) + j) == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	for(i = 0 ; i < N ; i++)
	{
		free(*(p + i));
	}
	
	return 0;
}

void star(int N, int x, int y, int **p)
{
	if(N == 3)
	{
		*(*(p + x) + y) = 1;	*(*(p + x) + y + 1) = 1; *(*(p + x) + y + 2) = 1;
		*(*(p + x + 1) + y) = 1; *(*(p + x + 1) + y + 1) = 0; *(*(p + x + 1) + y + 2) = 1;
		*(*(p + x + 2) + y) = 1; *(*(p + x + 2) + y + 1) = 1; *(*(p + x + 2) + y + 2) = 1;
	}
	else
	{
		star(N / 3, x, y, p);	star(N / 3, x, y + N/3, p);	star(N / 3, x, y + (N * 2) / 3, p);
		star(N / 3, x + N / 3, y, p);		star(N / 3, x + N / 3, y + (N * 2) / 3, p);
		star(N / 3, x + (N * 2) / 3, y, p);	star(N / 3, x + (N * 2) / 3, y + N / 3, p);	star(N / 3, x + (N * 2) / 3, y + (N * 2) / 3, p);
	}
}
