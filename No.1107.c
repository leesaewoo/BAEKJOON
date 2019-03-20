#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//입력된 channel의 자릿수를 계산하는 함수
int count_channel(int channel);

// 입력된 int형 i값(channel값)을 char형 동적할당 배열에 넣어 button값과 비교하는 함수
int compare(int i, int channel_number, int button[]);

int main(void)
{
	int button[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int channel;
	scanf("%d", &channel);	getchar();
	
	int channel_number = count_channel(channel);
	
	int button_break_number;
	scanf("%d", &button_break_number);	getchar();
	
	int i, button_break;
	if(button_break_number != 0)
	{
		for(i = 0 ; i < button_break_number ; i++)
		{
			scanf("%d", &button_break);
			button[button_break] = -1;
		} getchar();
	}

	
	int check = -1;
	int counter = 0;
	int channel_number_minus;
	if(button_break_number != 10)
	{
		for(i = channel ; i < 10000000 ; i++)
		{
			channel_number_minus = count_channel(i);
			check = compare(i, channel_number_minus, button);
			if(check != -1)
			{
				break;
			}
			counter++;
		}
	}
	int check_minus;
	if(check == -1)
	{
		check_minus = 999999;
	}
	else
	{
		check_minus = check + counter;		
	}
	
	check = -1;
	counter = 0;
	int channel_number_plus;
	if(button_break_number != 10)
	{
		for(i = channel ; i >= 0 ; i--)
		{
			channel_number_plus = count_channel(i);
			check = compare(i, channel_number_plus, button);
			if(check != -1)
			{
				break;
			}
			
			if(i != 0)
			{
				counter++;	
			}
		}
	}
	int check_plus;
	if(check == -1)
	{
		check_plus = 999999;
	}
	else
	{
		check_plus = check + counter;		
	}

	
	int check_100 = abs(channel - 100);
	
	if(button_break_number == 10)
	{
		printf("%d\n", check_100);
	}
	else if(check_minus >= check_plus && check_100 >= check_plus)
	{
		printf("%d\n", check_plus);
	}
	else if(check_plus >= check_minus && check_100 >= check_minus)
	{
		printf("%d\n", check_minus);
	}
	else if(check_plus >= check_100 && check_minus >= check_100)
	{
		printf("%d\n", check_100);
	}
	
	return 0;
}

//입력된 channel의 자릿수를 계산하는 함수
int count_channel(int channel)
{
	if(channel / pow(10, 5) >= 1)
	{
		return 6;
	}
	else if(channel / pow(10, 4) >= 1)
	{
		return 5;
	}
	else if(channel / pow(10, 3) >= 1)
	{
		return 4;
	}
	else if(channel / pow(10, 2) >= 1)
	{
		return 3;
	}
	else if(channel / pow(10, 1) >= 1)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}


// 입력된 int형 i값(channel값)을 char형 동적할당 배열에 넣어 button값과 비교하는 함수
int compare(int i, int channel_number, int button[])
{
	int *pc = (int*)malloc(sizeof(int) * channel_number);
	int j;
	for(j = 0 ; j < channel_number ; j++)
	{
		*(pc + j) = i / pow(10, channel_number - 1 - j);
		i -= *(pc + j) * pow(10, channel_number -1 - j);
	}
	
	for(j = 0 ; j < channel_number ; j++)
	{
		if(button[*(pc + j)] == -1)
		{
			free(pc);
			return -1;
		}
		else if(j == channel_number - 1)
		{
			if(button[*(pc + j)] != -1)
			{
				free(pc);
				return channel_number;
			}
			else
			{
				free(pc);
				return -1;
			}
		}
	}
} 
