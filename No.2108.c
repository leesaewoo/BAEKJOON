#include <stdio.h>

void Average(float sum, float N);
void MidValue(int Array[], int N);
void Mode(int Array[], int N);
void Range(int Array[], int N);

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
		Array[4000 + temp]++;
		sum += temp;
	}
	
	Average(sum, N);
	MidValue(Array, N);
	Mode(Array, N);
	Range(Array, N);
	
	return 0;
}

void Average(float sum, float N)
{
	printf("%.0f\n", sum / N);
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

	int i, temp_Array;
	
	for(i = 0 ; i < 8001 ; i++)
	{
		temp_Array = Array[i];
		while(temp_Array != 0)
		{
			count++;
			temp_Array--;
			if(count == n / 2)
			{
				printf("%d\n", i - 4000);
				break;
			}
		}
	}
}

void Mode(int Array[], int N)
{
	int temp = 0;
	int count = 0;
	int count_temp = 0;
	int check = 0;
	int i, temp_Array;
	
	for(i = 0 ; i < 8001 ; i++)
	{
		temp_Array = Array[i];
		count = 0;
		while(temp_Array > 0)
		{
			count++;
			temp_Array--;
		}
		
		if(count_temp < count && count != 0)
		{
			count_temp = count;
			temp = i - 4000;
			check = 0;
		}
		else if(count_temp == count && check == 0 && count != 0)
		{
			temp = i - 4000;
			check = 2;
		}
	}
	printf("%d\n", temp);
}

void Range(int Array[], int N)
{
	int temp_i;
	int temp_max = -4000;
	int temp_min = 4000;
	int i;
	
	for(i = 0 ; i < 8001 ; i++)
	{
		if(Array[i] > 0)
		{
			temp_i = i - 4000;
			
			if(temp_max < temp_i)
			{
				temp_max = temp_i;
			}
			
			if(temp_min > temp_i)
			{
				temp_min = temp_i;
			}
		}
	}
	
	printf("%d\n", temp_max - temp_min);
}
