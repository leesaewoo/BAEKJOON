#include <stdio.h>

int compare(int check[]);

int main(void)
{
	int check[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	char N[7];
	int i;
	
	scanf("%[^\n]s", N);
	
	for(i = 0 ; N[i] != NULL ; i++)
	{
		check[N[i] - '0']++;
	}
	
	printf("%d\n", compare(check));
	
	return 0;
}

int compare(int check[])
{
	int temp_1 = 0;
	int temp_2 = check[6] + check[9];
	int i;
	for(i = 0 ; i < 10 ; i++)
	{
		if(check[i] >= temp_1 && i != 6 && i != 9)
		{
			temp_1 = check[i];
		}
	}
	
	if(temp_1 * 2 >= temp_2)
	{
		return temp_1;
	}
	else
	{
		if(temp_2 % 2 == 0)
		{
			return temp_2 / 2;
		}
		else if(temp_2 % 2 == 1)
		{
			return (temp_2 + 1) / 2;
		}
	}
} 
