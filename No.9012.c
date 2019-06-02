#include <stdio.h>

void BufferClear(void);
void DiscriminateVPS(void);

int main(void)
{
	int T;
	scanf("%d", &T);
	BufferClear();
		
	int i;
	for(i = 0 ; i < T ; i++)
	{
		DiscriminateVPS();
	}

	return 0;
}

void BufferClear(void)
{
	while(getchar() != '\n');
}

void DiscriminateVPS(void)
{
	int count = 0;
	int result = 0;
	char c;
	
	while(1)
	{
		c = getchar();
		
		if(c == '(')
		{
			count++;
		}
		else if(c == ')')
		{
			if(count > 0)
			{
				count--;
			}
			else if(count <= 0)
			{
				result = -1;
				BufferClear();
				break;
			}
		}
		else if(c == '\n')
		{
			if(count == 0)
			{
				result = 1;
			}
			else
			{
				result = -1;
			}
			
			break;
		}
	}
	
	if(result == 1)
	{
		printf("YES\n");
	}
	else if(result == -1)
	{
		printf("NO\n");
	}
}
