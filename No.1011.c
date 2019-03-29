#include <stdio.h>
#include <stdlib.h>

void teleport(unsigned int x, unsigned int y);
unsigned int add_to_1(unsigned int N);

int main(void)
{
	int T;
	scanf("%d", &T); getchar();
	
	unsigned int **cd = (unsigned int**)malloc(sizeof(unsigned int*) * T);
	int i;
	for(i = 0 ; i < T ; i++)
	{
		*(cd + i) = (unsigned int*)malloc(sizeof(unsigned int) * 2);
	}
	
	for(i = 0 ; i < T ; i++)
	{
		scanf("%d", &*(*(cd + i) + 0));
		scanf("%d", &*(*(cd + i) + 1));
	}
	
	for(i = 0 ; i < T ; i ++)
	{
		teleport(*(*(cd + i) + 0), *(*(cd + i) + 1));
	}
	
	
	for(i = 0 ; i < T ; i++)
	{
		free(*(cd + i));
	}
	return 0;
}

void teleport(unsigned int x, unsigned int y)
{
	unsigned int total_length = y - x;
	unsigned int N = 1;
	int counter = 0;
	
	total_length -= N;
	counter++;
	
	while(total_length != 0)
	{
		if(total_length >= add_to_1(N + 1))
		{
			N++;
			total_length -= N;
			counter++;
		}
		else if(total_length >= add_to_1(N))
		{
			total_length -= N;
			counter++;
		}
		else if(total_length >= add_to_1(N - 1))
		{
			N--;
			total_length -= N;
			counter++;
		}
	}
	
	printf("%d\n", counter);
}

unsigned int add_to_1(unsigned int N)
{
	unsigned int temp;
	
	temp = N * (N + 1) / 2;
	
	return temp;
}
