#include <stdio.h>
#include <stdlib.h>

#define MAXNUM  51

void BufferClear(){
	while(getchar() != '\n');
}

typedef struct _Test{
	char str[MAXNUM];
	int num;
}Test;


int main(void)
{
	int N;
	scanf("%d", &N); BufferClear();
	
	Test *mainPtr[N];
	
	int i;
	for(i = 0 ; i < sizeof(mainPtr) / sizeof(Test *) ; i++)
	{
		ptr[i] = malloc(sizeof(Test));
	}
	
	int j;
	for(i = 0 ; i < N ; i++)
	{
		scanf("%[^\n]s", mainPtr[i]->str); BufferClear();
		
		for(j = 0 ; j < MAXNUM ; j++)
		{
			if(mainPtr[i]->str[j] != NULL)
			{
				continue;
			}
			else if(mainPtr[i]->str[j] == NULL)
			{
				mainPtr[i]->num = j;
				break;
			}
		}
	}
	
	//check
	for(i = 0 ; i < N ; i++)
	{
		printf("mainPtr[%d] = %s\nmainPtr[%d] = %d\n", i, mainPtr[i]->str, i, mainPtr[i]->num);
	}
	//check
	
	Test *tempPtr[N];
	
	for(i = 0 ; i < sizeof(tempPtr) / sizeof(Temp *) ; i++)
	{
		*tempPtr[i] = malloc(sizeof(Temp));
	}
	
	int count;
	for(i = 0 ; i < 51 ; i++)
	{
		count = 0;
		for(j = 0 ; j < N ; j++)
		{
			if(mainPtr[j]->num == i)
			{
				tempPtr[i]->str = mainPtr[j]->str;
				tempPtr[i]->num = mainPtr[j]->num;
				count++;
			}
		}
		
		if(count > 0)
		{
			for(j = 0 ; j < 51 ; j++)
			{
				
			}
		}
	}
	
	return 0;
}
