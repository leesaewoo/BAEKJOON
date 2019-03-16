#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	getchar();
	
	int i, R, j, k;
	char S[21];
	char *pS;
	pS = S;
	
	for(i = 0 ; i < T ; i++)
	{
		scanf("%d", &R);
		getchar();
		
		scanf(" %[^\n]s", pS);
		
		for(j = 0 ; ; j++)
		{
			if(*(pS + j) != NULL)
			{
				for(k = 0 ; k < R ; k ++)
				{
					printf("%c", *(pS + j));					
				}
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
	
	return 0;
}
