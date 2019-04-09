#include <stdio.h>

void Average(int sum, int N);
void MidValue(int Array[], int N);

//TODO : 최빈값, 범위 함수 추가하기 

int main(void)
{
	int Array[8001] = {0};
	int N;
	scanf("%d", &N);
	
	int i, temp;
	int sum = 0;
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &temp);
		Array[4000 + temp] = 1;
		sum += temp;
	}
	
	Average(sum, N);
	MidValue(Array, N);

	return 0;
}

void Average(int sum, int N)
{
	printf("%d\n", sum / N);
}

void MidValue(int Array[], int N)
{
	int n;
	if(N % 2 == 1)
	{
		n = (N + 1);
	}
	else
	{
		n = N;
	}
	
	int count = 0;
	int i;
	for(i = 0 ; i < 8001 ; i++)
	{
		while(Array[i] != 0)
		{
			if(Array[i] == 1)
			{
				count++;
				Array[i]--;
			}
		}
		
		if(count == n / 2)
		{
			printf("%d\n", i - 4000);
			break;
		}
	}
}
