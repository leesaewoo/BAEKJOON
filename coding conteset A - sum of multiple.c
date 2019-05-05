#include <stdio.h>

int globalCheckMultiple[1000];

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	
	int multiple[M];
	int i;
	for(i = 0 ; i < M ; i++)
	{
		scanf("%d", &multiple[i]);
	}
	
	int j;
	for(i = 0 ; i < M ; i++)
	{
		for(j = 1 ; j <= 1000 / multiple[i] ; j++)
		{
			if(globalCheckMultiple[multiple[i] * j - 1] == 0)
			{
				globalCheckMultiple[multiple[i] * j - 1] = 1;
			}
		}
	}
	
	int sumOfMultiple = 0;
	for(i = 0 ; i < N ; i++)
	{
		if(globalCheckMultiple[i] == 1)
		{
			sumOfMultiple += i + 1;
		}
	}
	
	printf("%d\n", sumOfMultiple);
	
	return 0;
}
