#include <stdio.h>
#include <math.h>

void GetPrime(int start, int end, int between);

int main(void)
{
	int start, end;
	
	scanf("%d %d", &start, &end);
	
	int between = end - start + 1;	
	
	GetPrime(start, end, between);
	
	return 0;
}

void GetPrime(int start, int end, int between)
{
	int i, j;
	int sqr;
	
	for(i = start ; i <= end ; i++)
	{
		if(i == 2 || i == 3 || i == 5 || i == 7)
		{
			printf("%d\n", i);
		}
		else if(i != 1)
		{
			if(i % 10 == 1 || i % 10 == 3 || i % 10 == 7 || i % 10 == 9)
			{
				sqr = sqrt(i);
				for(j = 2 ; j <= sqr ; j++)
				{
					if(i % j == 0)
					{
						break;
					}
					else if(j == sqr)
					{
						printf("%d\n", i);
					}
				}
			}
		}
	}
}
