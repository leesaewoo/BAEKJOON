#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//TO DO LIST
//LINE 31 �κ� ���� (i���� �ڸ����� channel���� �ڸ������� Ŀ���� channel_number �� ���) 

int count_channel(int channel);
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
	for(i = 0 ; i < button_break_number ; i++)
	{
		scanf("%d", &button_break);
		button[button_break] = -1;
	} getchar();
	
	int check = -1;
	int counter = 0;
	for(i = channel ; i < 1000000 ; i++)
	{
		check = compare(i, channel_number, button);
		if(check != -1)
		{
			break;
		}
		counter++;
	}
	
	printf("channel = %d\nchannel_number = %d\nbutton_break_number = %d\ncheck = %d\ncounter = %d\n", channel, channel_number, button_break_number, check, counter);
	
	return 0;
}

//�Էµ� channel�� �ڸ����� ����ϴ� �Լ� 
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


// �Էµ� int�� i��(channel��)�� char�� �����Ҵ� �迭�� �־� button���� ���ϴ� �Լ�
int compare(int i, int channel_number, int button[])
{
	int *pc = (int*)malloc(sizeof(int) * channel_number);
	int j;
	for(j = 0 ; j < channel_number ; j++)
	{
		*(pc + j) = i / pow(10, channel_number - 1 - j);
		i -= *(pc + j) * pow(10, channel_number -1 -j);
	}
	
	for(j = 0 ; j < channel_number ; j++)
	{
		if(button[*(pc + j)] == -1)
		{
			free(pc);
			return -1;
		}
		else if(j == channel_number)
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
