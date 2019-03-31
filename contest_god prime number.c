#include <stdio.h>

int n;
int LCG(int n, int a, int b);

int main(void)
{
	int a = 860798509;
	int b = 198609463;
	
	scanf("%d", &n);
	
	
	LCG(n, a, b);
	
	return 0;
}

int LCG(int p, int a, int b)
{
	int xk;
	if(p == 0)
	{
		return n;
	}
	
	xk = a * LCG(p - 1, a, b) + b ;
	
	return xk;
}
