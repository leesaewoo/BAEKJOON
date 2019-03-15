#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	float Score[N];
	float *ps;
	ps = Score;
	float MAX;
	int i;
	
	if(N != 0)
	{
		for(i = 0 ; i < N ; i ++)
		{
			scanf("%f", (ps + i));
			
			if(i == 0)
			{
				MAX = *(ps + i);
			}
			else if(MAX < *(ps + i))
			{
				MAX = *(ps + i);
			}
		}
		
		for(i = 0 ; i < N ; i ++)
		{
			*(ps + i) = (*(ps + i) / MAX) * 100;
		}
		
		float SUM = 0;
		for(i = 0 ; i < N ; i ++)
		{
			SUM += *(ps + i);
		}
		
		printf("%f\n", SUM / N);
	}
	else
	{
		printf("0");
	}
	
	return 0;
}
