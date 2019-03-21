#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int count_number(int i); //i를 입력받아 자릿수를 계산하는 함수 

int main(void)
{
	int N;
	scanf("%d", &N);
	
	int counter, c_n, temp;
	int counter_N = 0;
	int i, j, k;
	for(i = 1 ; ; i++)
	{
		temp = i;
		counter = 0;
		c_n = count_number(temp);
		
		int *pn = (int*)malloc(sizeof(int) * c_n);
		
		for(j = 0 ; j < c_n ; j++)
		{
			*(pn + j) = temp / pow(10, c_n - 1 - j);
			if(*(pn + j) == 6)
			{
				counter++;
				if(counter >= 3)
				{
					counter_N++;
					break;
				}
			}
			else
			{
				counter = 0;
			}
			temp -= *(pn + j) * pow(10, c_n - 1 - j);
		}
		
		free(pn);
		
		if(counter_N == N)
		{
			printf("%d\n", i);
			break;
		}
	}
	
	return 0;
}

int count_number(int i)
{
	int j;
	int cnt = 1;
	for(j = 1 ; ; j *= 10)
	{
		if(i / j < 10 && i / j >= 0)
		{
			break;
		}
		cnt++;
	}
	return cnt;
} 
