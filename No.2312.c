#include <stdio.h>

short g_count[100001];

void FractionalDecomposition(int N);

int main(void)
{
	int T;
	scanf("%d", &T);
	
	int N;
	int i, j;
	for(i = 0 ; i < T ; i++)
	{
		scanf("%d", &N);
		FractionalDecomposition(N);
		for(j = 2 ; j <= N ; j ++)
		{
			if(g_count[j] != 0)
			{
				printf("%d %d\n", j, g_count[j]);
				g_count[j] = 0;
			}
		}
	}
	
	return 0;
}

void FractionalDecomposition(int N)
{
	int i;
	for(i = 2 ; i <= N ; i++)
	{
		if(i == N)
		{
			g_count[i]++;
		}
		else if(N % i == 0)
		{
			g_count[i]++;
			FractionalDecomposition(N / i);
			break;
		}
	}
}
