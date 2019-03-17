#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	int integer[4];
	int *pi = integer;
	
	int counter = 0;
	int i;
	
	for(i = 1 ; i <= N ; i++)
	{
		if(i >= 1 && i <= 99)
		{
			counter++;
		}
		else if(i >= 100 && i <= 999)
		{
			*(pi + 0) = i / 100;
			*(pi + 1) = (i - (*(pi + 0) * 100)) / 10;
			*(pi + 2) = (i - (*(pi + 0) * 100) - (*(pi + 1) * 10));
			
			if(*(pi + 0) - *(pi + 1) == *(pi + 1) - *(pi + 2))
			{
				counter++;
			}
		}
	}
	\
	printf("%d\n", counter);
	
	
	return 0;
}
