#include <stdio.h>

int main(void)
{
	char Short[100];
	char check;
	int i = 0;
	
	while(1)
	{
		scanf("%c", &check);
		
		if(check != 10)
		{
			if(check >= 65 && check <= 90)
			{
				Short[i] = check;
				i++;
			}
		}
		else if(check == 10)
		{
			Short[i] = NULL;
			printf("%s\n", Short);
			break;
		}
	}
	return 0;
}
