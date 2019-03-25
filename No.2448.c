#include <stdio.h>

int i;
char a[3072][6144];
void star(int, int, int);

int main(void)
{
	int N;
	scanf("%d", &N); getchar();
	
	int j, k;
	for(j = 0 ; j < N ; j++)
	{
		for(k = 0 ; k < 2 * N ; k++)
		{
			a[j][k] = ' ';
		}
	}
	
	star(N, 0, N - 1);
	
	for(j = 0 ; j < N ; j++)
	{
		for(k = 0 ; k < 2 * N ; k++)
		{
			printf("%c", a[j][k]);
		}
		printf("\n");
	}
	
	return 0;
}

void star(int N, int x, int y)
{
	if(N == 3)
	{
		a[x][y] = '*';
		a[x + 1][y - 1] = '*';
		a[x + 1][y + 1] = '*';
		a[x + 2][y - 2] = '*';
		a[x + 2][y - 1] = '*';
		a[x + 2][y] = '*';
		a[x + 2][y + 1] = '*';
		a[x + 2][y + 2] = '*';
	}
	else
	{
		star(N / 2, x , y);
		star(N / 2, x + N / 2, y - N / 2);
		star(N / 2, x + N / 2, y + N / 2);
	}
}
