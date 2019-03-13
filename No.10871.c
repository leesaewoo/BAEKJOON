#include <stdio.h>

int main(void)
{
	int N, X, i;
	int counter = 0;
	
	scanf("%d %d", &N, &X);
	
	int Array[N];
	
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &Array[i]);
	}
	
	for(i = 0 ; i < N ; i ++)
	{
		if(Array[i] < X && counter == 0)
		{
			printf("%d", Array[i]);
			counter++;
		}
		else if(Array[i] < X)
		{
			printf(" ");
			printf("%d", Array[i]);
		}
	}
	return 0;
}
