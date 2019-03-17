#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int LINE, ROW;
	scanf("%d %d", &LINE, &ROW);
			
	char **ChessBoard = (char**)malloc(sizeof(char*) * LINE);
	int i, j, x, y;
	for(i = 0 ; i < LINE ; i++)
	{
		*(ChessBoard + i) = (char*)malloc(sizeof(char) * ROW);
		scanf(" %[^\n]s", *(ChessBoard + i));
	}

	int temp = 1000;
	int counter;
	int check = 1;
	
	//start W
	for(i = 0 ; i <= LINE - 8 ; i++)
	{
		for(j = 0 ; j <= ROW - 8 ; j++)
		{
			counter = 0;
			
			for(x = 0 ; x < 8 ; x++)
			{
				for(y = 0 ; y < 8 ; y++)
				{
					if(*(*(ChessBoard + i + x) + j + y) != 'W' && check == 1)
					{
						counter++;
						check *= -1;
					}
					else if(*(*(ChessBoard + i + x) + j + y) != 'B' && check == -1)
					{
						counter++;
						check *= -1;
					}
					else
					{
						check *= -1;
					}
				}
				check *= -1;
			}
			
			if(temp > counter)
			{
				temp = counter;
			}
		}
	}
	
	//start B
	check = 1;
	
	for(i = 0 ; i <= LINE - 8 ; i++)
	{
		for(j = 0 ; j <= ROW - 8 ; j++)
		{
			counter = 0;
			
			for(x = 0 ; x < 8 ; x++)
			{
				for(y = 0 ; y < 8 ; y++)
				{
					if(*(*(ChessBoard + i + x) + j + y) != 'B' && check == 1)
					{
						counter++;
						check *= -1;
					}
					else if(*(*(ChessBoard + i + x) + j + y) != 'W' && check == -1)
					{
						counter++;
						check *= -1;
					}
					else
					{
						check *= -1;
					}
				}
				check *= -1;
			}
			
			if(temp > counter)
			{
				temp = counter;
			}
		}
	}
	
	printf("%d\n", temp);
	
	for(i = 0 ; i < LINE ; i++)
	{
		free(*(ChessBoard + i));
	}
	
	return 0;
}
