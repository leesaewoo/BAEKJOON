#include <stdio.h>


int g_prime[10001];

void GetPrime();

void GoldPrime(int n);

int main(void)
{
	int T;
	scanf("%d", &T);
	
	GetPrime();
	
	int n;
	int i;
	for(i = 0 ; i < T ; i++)
	{
		scanf("%d", &n);
		GoldPrime(n);
	}
	
	return 0;
}

void GetPrime()
{
	g_prime[2] = 1;
	
	int i, j;
	for(i = 3 ; i < 10001 ; i++)
	{
		for(j = 2 ; j < i ; j++)
		{
			if(i % j == 0)
			{
				break;
			}
			else if(j == i - 1)
			{
				g_prime[i] = 1;
			}
		}
	}
}

void GoldPrime(int n)
{
	int N;
	if(n % 2 == 0)
	{
		N = n / 2;
	}
	else
	{
		N = (n + 1) / 2;
	}
	
	int lowValue, highValue, i, j;
	
	for(i = N; i >= 2 ; i--)
	{
		if(g_prime[i] == 1)
		{
			if(g_prime[n - i] == 1)
			{
				lowValue = i;
				highValue = n - i;
				break;
			}
		}
	}
	
	printf("%d %d\n", lowValue, highValue);
}
