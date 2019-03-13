#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	int chk = N % 5;
	
	if(chk == 0)
	{
		printf("%d", N / 5);
	}
	else if(chk == 1 || chk == 3)
	{
		printf("%d", N / 5 + 1);
	}
	else if(chk == 2 || chk == 4)
	{
		if(N == 4 || N == 7)
		{
			printf("-1");
		}
		else
		{
			printf("%d", N / 5 + 2);
		}
	}
	else
	{
		printf("%d", N / 5);
	}
	
	return 0;
}
