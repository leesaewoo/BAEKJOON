#include <stdio.h>

int main(void)
{
	char in[101] = {'a','a','a','a'};
	char *pi;
	pi = in;
	int i, counter;
	
	scanf("%[^\n]s", pi);
	
	for(i = 0, counter = 0 ; ; i++)
	{
		if(*(pi + i) == 'c')
		{
			if(*(pi + i + 1) == '=' || *(pi + i + 1) == '-')
			{
				counter++;
				i++;
			}
			else
			{
				counter++;
			}
		}
		else if(*(pi + i) == 'd')
		{
			if(*(pi + i + 1) == 'z' && *(pi + i + 2) == '=')
			{
				counter++;
				i += 2;
			}
			else if(*(pi + i + 1) == '-')
			{
				counter++;
				i++;
			}
			else
			{
				counter++;
			}
		}
		else if(*(pi + i) == 'l' && *(pi + i + 1) == 'j')
		{
			counter++;
			i++;
		}
		else if(*(pi + i) == 'n' && *(pi + i + 1) =='j')
		{
			counter++;
			i++;
		}
		else if(*(pi + i) == 's' && *(pi + i + 1) == '=')
		{
			counter++;
			i++;
		}
		else if(*(pi + i) == 'z' && *(pi + i) == '=')
		{
			counter++;
			i++;
		}
		else if(*(pi + i) == '-' || *(pi + i) == '=')
		{
			continue;
		}
		else if(*(pi + i) == NULL)
		{
			break;
		}
		else
		{
			counter++;
		}
	}
	
	printf("%d\n", counter);
	
	return 0;
}
