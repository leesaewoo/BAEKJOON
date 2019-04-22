#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNUM  51

/* TODO (#1#): 구조체 매개변수 연구 */


void BufferClear(){
	while(getchar() != '\n');
}

typedef struct _Test{
	char str[MAXNUM];
	int num;
}Test;

void BubbleSort(Test *tempPtr[], int count);


int main(void)
{
	int N;
	scanf("%d", &N); BufferClear();
	
	Test *mainPtr[N];
	
	int i;
	for(i = 0 ; i < sizeof(mainPtr) / sizeof(Test *) ; i++)
	{
		mainPtr[i] = malloc(sizeof(Test));
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
	
	for(i = 0 ; i < sizeof(tempPtr) / sizeof(Test *) ; i++)
	{
		tempPtr[i] = malloc(sizeof(Test));
	}
	
	int count;
	for(i = 0 ; i < 51 ; i++)
	{
		count = 0;
		for(j = 0 ; j < N ; j++)
		{
			if(mainPtr[j]->num == i)
			{
				strcpy(tempPtr[i]->str, mainPtr[j]->str);
				tempPtr[i]->num = mainPtr[j]->num;
				count++;
			}
		}
		
		if(count > 0)
		{
			BubbleSort(tempPtr, count);
		}
	}
	
	return 0;
}

void BubbleSort(Test *tempPtr[], int count)
{
	int i;
	for(i = 0 ; i < count ; i++)
	{
		printf("%s\n%d\n", tempPtr[i]->str, tempPtr[i]->num);
	}
}
