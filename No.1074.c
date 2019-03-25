#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void z_search(int N, int x, int y, int r, int c);
int counter = 0;
int check = 0;

int main(void)
{
	int N, r, c;
	scanf("%d", &N);
	scanf("%d", &r);
	scanf("%d", &c); getchar();

	z_search(N, 0, 0, r, c);

	return 0;
}

void z_search(int N, int x, int y, int r, int c)
{
	if(N == 1 && check == 0)
	{
		//pa[x][y] = counter;
		if(x == r && y == c)
		{
			printf("%d\n", counter);
			check = 1;
		}
		counter++;
		//pa[x][y + 1] = counter;
		if(x == r && y + 1 == c)
		{
			printf("%d\n", counter);
			check = 1;
		}
		counter++;
		//pa[x + 1][y] = counter;
		if(x + 1 == r && y == c)
		{
			printf("%d\n", counter);
			check = 1;
		}
		counter++;
		//pa[x + 1][y + 1] = counter;
		if(x + 1 == r && y + 1 == c)
		{
			printf("%d\n", counter);
			check = 1;
		}
		counter++;
	}
	else if(N != 1 && check == 0)
	{
		if(abs(r - x) >= pow(2, N - 1) || abs(c - y) >= pow(2, N - 1))
		{
			counter += pow(2, N - 1) * pow(2, N - 1);
		}
		else
		{
			z_search(N - 1, x, y, r, c);		
		}
		
		if(abs(r - x) >= pow(2, N - 1) || abs(c - (y + pow(2, N - 1))) >= pow(2, N - 1))
		{
			counter += pow(2, N - 1) * pow(2, N - 1);
		}
		else
		{
			z_search(N - 1, x, y + pow(2, N - 1), r, c);
		}
		
		if(abs(r - (x + pow(2, N - 1))) >= pow(2, N - 1) || abs(c - y) >= pow(2, N - 1))
		{
			counter += pow(2, N - 1) * pow(2, N - 1);
		}
		else
		{
			z_search(N - 1, x + pow(2, N - 1), y, r, c);
		}
		
		if(abs(r - (x + pow(2, N - 1))) >= pow(2, N - 1) || abs(c - (y + pow(2, N - 1))) >= pow(2, N - 1))
		{
			counter += pow(2, N - 1) * pow(2, N - 1);
		}
		else
		{
			z_search(N - 1, x + pow(2, N - 1), y + pow(2, N - 1), r, c);
		}
	}
}
