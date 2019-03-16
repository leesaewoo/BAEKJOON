#include <stdio.h>

int main(void)
{
	
	char ASCII;
	
	while(1)
	{
		if(scanf("%c", &ASCII) != - 1)
		{
			printf("%d\n", ASCII);
		}
		else
		{
			break;
		}
		while(getchar() == ' ');
	}
	
	return 0;
}
