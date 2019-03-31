#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int LINE = 30;
	
	char **pc = (char**)malloc(sizeof(char*) * LINE);
	
	int i;
	for(i = 0 ; i < LINE ; i++)
	{
		*(pc + i) = (char*)malloc(sizeof(char) * 31);
	}
	
	int j;
	int check;
	for(i = 0 ; i < LINE ; i++)
	{
		scanf("%[^\n]s", &**(pc + i)); getchar();
		
		check = 1;
		for(j = 0 ; j < 30 ; j++)
		{
			if(j >= 26)
			{
				printf("NO\n");
				break;
			}
			else if(*(*(pc + i) + j) == ':' && j < 26)
			{
				check *= -1;
				if(*(*(pc + i) + j + 1) == 'c')
				{
					if(*(*(pc + i) + j + 2) == 'a')
					{
						if(*(*(pc + i) + j + 3) == 't')
						{
							if(*(*(pc + i) + j + 4) == ':' && check == -1)
							{
								printf("YES\n");
								break;
							}
						}
					}
				}
				else if(*(*(pc + i) + j + 1) == ':')
				{
					check *= -1;
				}
			}
			else if(*(*(pc + i) + j) != ':' && *(*(pc + i) + j + 1) == ':' && check == -1)
			{
				check *= -1;
				j++;
			}
		}
	}
	
	
	for(i = 0 ; i < LINE ; i++)
	{
		free(*(pc + i));
	}
	free(pc);
	
	return 0;
}
