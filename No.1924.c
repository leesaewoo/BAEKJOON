#include <stdio.h>

int main(void)
{
	int M[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	int x, y;
	scanf("%d %d", &x, &y);
	
	int i = 0;
	
	while(i < x - 1)
	{
		y += M[i];
		i++;
	}
	
	int DAY = y % 7;
	
	if(DAY == 1)
	{
		printf("MON");
	}
	else if(DAY == 2)
	{
		printf("TUE");
	}
	else if(DAY == 3)
	{
		printf("WED");
	}
	else if(DAY == 4)
	{
		printf("THU");
	}
	else if(DAY == 5)
	{
		printf("FRI");
	}
	else if(DAY == 6)
	{
		printf("SAT");
	}
	else if(DAY == 0)
	{
		printf("SUN");
	}
	
	return 0;
}
