#include <stdio.h>

int main(void)
{
	char str[101];
	scanf(" %[^\n]s",str);
	int i, j;
	
	for(i = 0 ; i < 10 ; i++)
	{
		for(j = 0 ; j < 10 ; j++)
		{
			if(str[(10 * i) + j] == NULL)
			{
				i = 10;
				break;
			}
			else
			{
			printf("%c",str[(10 * i) + j]);
			}
		}
		if(i != 10)printf("\n");
	}
	return 0;
}
