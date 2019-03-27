#include <stdio.h>

int main(void)
{
	int N;
	int i = 0;
	int sum = 1;
	
	scanf("%d", &N);
	
	if(N > 300030001)
	{
		i = 10000;
		sum += 300030000;
	}
	
	for(i++ ; sum < N ; i++)
	{
		sum += 6 * i;
	}
	
	printf("%d\n", i);
	
	
	return 0;
}
