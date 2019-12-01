#include <stdio.h>

int main(void)
{
	int N, M, n_N;
	int count = 0;
	
	scanf("%d %d", &N, &M);
	
	while(1)
	{
		count += N;
		
		if(N < M)
		{
			break;
		}
		else if(N == M)
		{
			count++;
			break;
		}
		
		n_N = N / M;
		N = n_N;
	}
	
	printf("%d\n", count);
	
	return 0;
}


