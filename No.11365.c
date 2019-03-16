#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int counter, i;
	
	while(1)
	{
		counter = 0;
		
		char *pSC = (char*)malloc(sizeof(char) * 501);
		
		scanf("%[^\n]s", pSC);
		getchar();
		
		if(*(pSC + 0) == 'E' && *(pSC + 1) == 'N' && *(pSC + 2) == 'D' && *(pSC + 3) == NULL)
		{
			free(pSC);
			break;
		}
		
		for(i = 0 ; ; i++)
		{
			if(*(pSC + i) != NULL)
			{
				counter++;
			}
			else
			{
				break;
			}
		}
		
		for(i = counter - 1 ; i >= 0 ; i--)
		{
			printf("%c", *(pSC + i));
		}
		
		printf("\n");
		
		free(pSC);
	}
	
	return 0;
}
