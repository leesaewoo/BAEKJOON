#include <stdio.h>
#include <math.h>

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
	
	if(i % 2 == 0) // up
	{
		printf("%d/%d\n", i - (sum - X), sum - X + 1);
	}
	else if(i % 2 == 1) //down
	{
		printf("%d/%d\n", sum - X + 1, i - (sum - X));
	}
	
	return 0;
}
