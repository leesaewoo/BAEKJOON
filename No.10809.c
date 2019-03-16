#include <stdio.h>

int main(void)
{
	char word[101];
	char *pw;
	pw = word;
	scanf(" %[^\n]s", pw);
	
	int alphabet[26];
	int i;
	for(i = 0 ; i < 26 ; i++)
	{
		alphabet[i] = -1;
	}
	
	for(i = 0 ; ; i++)
	{
		if(*(pw + i) != NULL && alphabet[*(pw + i) - 'a'] == -1)
		{
			alphabet[*(pw + i) - 'a'] = i;
		}
		else if(*(pw + i) == NULL)
		{
			break;
		}
	}
	
	for(i = 0 ; i < 26 ; i++)
	{
		if(i == 25)
		{
			printf("%d", alphabet[i]);
			break;
		}
		printf("%d ", alphabet[i]);
	}
	
	return 0;
}
