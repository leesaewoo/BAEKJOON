#include <stdio.h>

void BufferClear(void)
{
	while(getchar() != '\n');
}

int main(void)
{
	char str[102];
	int i, j;
	
	for(i = 0 ; i < 100 ; i ++)
	{
		j = scanf("%[^\n]s",str);
		BufferClear();
		
		if(j == EOF)
		{
			break;
		}
		else if(j == 0)
		{
			printf("\n");
		}
		else
		{
			printf("%s\n",str);
		}
	}
	
	return 0;
}
