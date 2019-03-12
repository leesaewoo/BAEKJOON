#include <stdio.h>

int main(void)
{
	int N, i, j;
	
	scanf("%d", &N);

	for(i = 1 ; i < N+1 ; i++)
	{
		for(j = N-1 ; j >= 0 ; j--)
		{
			if(j < i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		if(i != N)printf("\n");
	}
	return 0;
}

