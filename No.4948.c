#include <stdio.h>
#include <math.h>

void BertrandsPostulate(int n); 

int main(void)
{
	// n:임의의 자연수  n < 베르트랑 공준 <= 2n 인 소수는 적어도 하나 
	int n;
	
	do
	{
		scanf("%d", &n);
		if(n != 0)
		{
			BertrandsPostulate(n);
		}
	}
	while(n != 0);
	
	return 0;
}

void BertrandsPostulate(int n)
{
	int start = n + 1;
	int end = 2 * n;
	int i, j;
	int sqr;
	int count = 0;
	
	for(i = start ; i <= end ; i++)
	{
		if(i == 2 || i == 3 || i == 5 || i == 7)
		{
			count++;
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
						count++;
					}
				}
			}
		}
	}
	
	printf("%d\n", count);
}
