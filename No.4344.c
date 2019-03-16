#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int TestCase;
	scanf("%d", &TestCase);
	
	int i, j, N;
	float sum, count;
	
	for(i = 0 ; i < TestCase ; i++)
	{
		scanf("%d", &N);
		
		int *Score = (int*)malloc(sizeof(int) * N);
		
		for(j = 0 ; j < N ; j++)
		{
			scanf("%d", Score + j);
		}
		
		for(j = 0, sum = 0 ; j < N ; j++)
		{
			sum += *(Score + j);
		}
		
		for(j = 0, count = 0 ; j < N ; j++)
		{
			if(*(Score + j) > sum / N)
			{
				count++;
			}
		}
		
		printf("%.3f%c\n", (count / N) * 100, 37);
		
		free(Score);
	}
	
	return 0;
}
