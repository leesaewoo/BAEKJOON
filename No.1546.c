#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	float Score[N];
	float MAX;
	int i;
	for(i = 0 ; i < N ; i ++)
	{
		scanf("%f", &Score[i]);
		
		if(i = 0)
		{
			MAX = Score[i];
		}
		else if(MAX < Score[i])
		{
			MAX = Score[i];
		}
	}
	
	for(i = 0 ; i < N ; i ++)
	{
		Score[i] = (Score[i] / MAX) * 100;
	}
	
	float SUM = 0;
	for(i = 0 ; i < N ; i ++)
	{
		SUM += Score[i];
	}
	
	printf("%.2f\n", SUM);
	
	return 0;
}
