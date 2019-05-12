#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void BufferClear();

void ProcessCommand(int *stack, char command[], int number, int* indexTop, int* indexBottom);

int main(void)
{
	short numberOfCommand;
	scanf("%d", &numberOfCommand);
	BufferClear();
	int *stack = (int*)malloc(sizeof(int) * numberOfCommand);
	int indexTop = 0;
	int indexBottom = 0;
	
	char command[11];
	int i, j, number;
	for(i = 0 ; i < numberOfCommand ; i++)
	{
		for(j = 0 ; j < 11 ; j ++)
		{
			scanf("%c", &command[j]);
			if(command[j] == ' ')
			{
				command[j] = '\0';
				scanf("%d", &number);
				BufferClear();
				break;
			}
			else if(command[j] == '\n')
			{
				command[j] = '\0';
				break;
			}
		}
		ProcessCommand(stack, command, number, &indexTop, &indexBottom);
	}
	
	
	free(stack);
	return 0;
}

void BufferClear()
{
	while(getchar() != '\n');
}

void ProcessCommand(int *stack, char command[], int number, int* indexTop, int* indexBottom)
{
	if(strcmp(command, "push") == 0)
	{
		*(stack + *indexTop) = number;
		*indexTop += 1;
	}
	else if(strcmp(command, "pop") == 0)
	{
		if(*indexTop == *indexBottom)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n", *(stack + *indexTop - 1));
			*indexTop -= 1;
		}
	}
	else if(strcmp(command, "size") == 0)
	{
		printf("%d\n", *indexTop - *indexBottom);
	}
	else if(strcmp(command, "empty") == 0)
	{
		if(*indexTop == *indexBottom)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	else if(strcmp(command, "top") == 0)
	{
		if(*indexTop == *indexBottom)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n", *(stack + *indexTop - 1));
		}
	}
}
