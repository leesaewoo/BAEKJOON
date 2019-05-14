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
			count--;
		}
		else if(c == '\n')
		{
			break;
		}
	}
	
	if(count == 0)
	{
		printf("YES %d\n", count);
	}
	else
	{
		printf("No %d\n", count);
	}
}
