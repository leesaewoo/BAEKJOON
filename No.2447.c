#include <stdio.h>
#include <stdlib.h>


int K;
void star(int N, int x, int y, char (*p)[K]);


int main(void)
{
	scanf("%d", &K);
	
	char p[K][K];
	
	int i, j;
	for(i = 0 ; i < K ; i++)
	{
		for(j = 0 ; j < K ; j++)
		{
			p[i][j] = ' ';
		}
	}
	
	star(K, 0, 0, p);
	
	for(i = 0 ; i < K ; i++)
	{
		for(j = 0 ; j < K ; j++)
		{
			printf("%c", p[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

void star(int N, int x, int y, char (*p)[K])
{
	if(N == 3)
	{
		p[x][y] = '*';		p[x][y + 1] = '*'; 		p[x][y + 2] = '*';
		p[x + 1][y] = '*'; 	p[x + 1][y + 1] = ' '; 	p[x + 1][y + 2] = '*';
		p[x + 2][y] = '*'; 	p[x + 2][y + 1] = '*'; 	p[x + 2][y + 2] = '*';
	}
	else
	{
		star(N / 3, x, y, p);	star(N / 3, x, y + N / 3, p);	star(N / 3, x, y + (N * 2) / 3, p);
		star(N / 3, x + N / 3, y, p);		star(N / 3, x + N / 3, y + (N * 2) / 3, p);
		star(N / 3, x + (N * 2) / 3, y, p);	star(N / 3, x + (N * 2) / 3, y + N / 3, p);	star(N / 3, x + (N * 2) / 3, y + (N * 2) / 3, p);
	}
}
