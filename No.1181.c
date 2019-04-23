#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNUM  51

/* TODO (#1#): 버블정렬 함수 완성하기 */


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
	
	int k, count, check;
	for(i = 0 ; i < 51 ; i++)
	{
		check = 0;
		count = 0;
		for(j = 0 ; j < N ; j++)
		{
			check = 0;
			if(mainPtr[j]->num == i)
			{
				for(k = 0 ; k < count ; k++)
				{
					if(strcmp(mainPtr[j]->str, tempPtr[k]->str) == 0)
					{
						check = 1;
						break;
					}
					else
					{
						check = 0;
					}
				}
				
				if(check != 1)
				{
					strcpy(tempPtr[count]->str, mainPtr[j]->str);
					tempPtr[count]->num = mainPtr[j]->num;
					count++;
					check = 0;
				}
			}
		}
		
		//check
		for(j = 0 ; j < count ; j++)
		{
			printf("tempPtr[%d] = %s\ntempPtr[%d] = %d\n", j, tempPtr[j]->str, j, tempPtr[j]->num);
		}
		//check
		
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
	
	//check
	printf("%s\n%d\n", tempPtr[i]->str, tempPtr[i]->num);
	//check
	
	if(count == 1)
	{
		printf("%s\n", tempPtr[count - 1]->str);
	}
	else
	{
		char tempChar[51];
		for(i = 0 ; i < count - 1 ; i++)
		{
			
			if(strcmp(tempPtr[i]->str, tempPtr[i + 1]->str) == -1)
			{
				strcpy(tempChar, tempPtr[i]->str);
				strcpy(tempPtr[i]->str, tempPtr[i + 1]->str);
				strcpy(tempPtr[i + 1]->str, tempChar);
			}
		}
	}
}
