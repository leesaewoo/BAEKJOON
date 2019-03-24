#include <stdio.h>
#include <stdlib.h>


int K;
char p[2187][2187];
void star(int N, int x, int y);


int main(void)
{
	scanf("%d", &K);
		
	int i, j;
	for(i = 0 ; i < K ; i++)
	{
		for(j = 0 ; j < K ; j++)
		{
			p[i][j] = ' ';
		}
	}
	
	star(K, 0, 0);
	
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

void star(int N, int x, int y)
{
	if(N == 3)
	{
		p[x][y] = '*';		p[x][y + 1] = '*'; 		p[x][y + 2] = '*';
		p[x + 1][y] = '*'; 	p[x + 1][y + 1] = ' '; 	p[x + 1][y + 2] = '*';
		p[x + 2][y] = '*'; 	p[x + 2][y + 1] = '*'; 	p[x + 2][y + 2] = '*';
	}
	else if(N == 1)
	{
		p[x][y] = '*';
	}
	else
	{
		star(N / 3, x, y);	star(N / 3, x, y + N / 3);	star(N / 3, x, y + (N * 2) / 3);
		star(N / 3, x + N / 3, y);		star(N / 3, x + N / 3, y + (N * 2) / 3);
		star(N / 3, x + (N * 2) / 3, y);	star(N / 3, x + (N * 2) / 3, y + N / 3);	star(N / 3, x + (N * 2) / 3, y + (N * 2) / 3);
	}
}
