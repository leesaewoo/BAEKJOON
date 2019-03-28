#include <stdio.h>

int main(void)
{
	int X;
	scanf("%d", &X);
	
	int i;
	int sum = 0;
	for(i = 1 ; ; i++)
	{
		sum += i;
		if(sum >= X)
		{
			break;
		}
	}
	
	printf("i = %d\nsum - X = %d\n", i, sum - X);
	
	
	return 0;
}
