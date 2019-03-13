#include <stdio.h>

int main(void)
{
	int Score;
	
	while(1)
	{
		if(scanf("%d", &Score) != EOF)
		{
			if(Score >= 90 && Score <= 100)
			{
				printf("A\n");
			}
			else if(Score >= 80 && Score <= 89)
			{
				printf("B\n");
			}
			else if(Score >= 70 && Score <= 79)
			{
				printf("C\n");
			}
			else if(Score >= 60 && Score <= 69)
			{
				printf("D\n");
			}
			else if(Score >= 0 && Score <= 59)
			{
				printf("F\n");
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}
