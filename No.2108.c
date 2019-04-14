#include <stdio.h>

void Average(int sum, int N);
void MidValue(int Array[], int N);
void Mode(int Array[], int N);

/* TODO (#1#): 최빈값 함수(Mode) 손보기 */
/* TODO (#2#): 범위 함수 추가하기 */


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
	Mode(Array, N);
	
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

	int count_MidValue = 0;

	int i;
	
	for(i = 0 ; i < 8001 ; i++)
	{
		while(Array[i] != 0)
		{
			if(Array[i] == 1)
			{
				count_MidValue++;
				Array[i]--;
			}
		}
		
		if(count_MidValue == n / 2)
		{
			printf("%d\n", i - 4000);
			break;
		}
	}
}

void Mode(int Array[], int N)
{
	int temp_Mode_2 = 0;
	int temp_Mode = 0;
	int temp_count_Mode = 0;
	int count_Mode = 0;
	int check = 0;
	int i;
	
	for(i = 0 ; i < 8001 ; i--)
	{
		count_Mode = 0;
		while(Array[i] != 0)
		{
			if(Array[i] == 1)
			{
				count_Mode++;
				Array[i]--;
			}
		}
		
		if(temp_count_Mode < count_Mode)
		{
			temp_count_Mode = count_Mode;
			temp_Mode = i - 4000;
		}
		else if(temp_count_Mode == count_Mode)
		{
			temp_Mode_2 = temp_Mode;
			temp_Mode = i - 4000;
		}
	}
	
	if(temp_Mode_2 == 0)
	{
		printf("%d\n", temp_Mode);
	}
	else if(temp_Mode_2 != 0)
	{
		printf("%d\n", temp_Mode_2);
	}
}

