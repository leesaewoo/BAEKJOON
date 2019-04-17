#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* TODO (#1#): 같은 길이의 단어들 모아놓은 배열 정렬하는 함수 만들기 */


void BufferClear()
{
	while(getchar() != '\n');
}

typedef struct Word {
	char** word;
	int* number;
}Word;

int main(void)
{	
	int i, j, count;
	char str[51];
	int N;
	scanf("%d", &N); BufferClear; // 1 <= N <= 20000
	
	Word word;
	Word temp;
	
	word.word = (char**)malloc(sizeof(char*) * N);
	word.number = (int*)malloc(sizeof(int) * N);
	
	temp.word = (char**)malloc(sizeof(char*) * N);
	temp.number = (int*)malloc(sizeof(int) * N);
	for(i = 0 ; i < 51 ; i++)
	{
		*(temp.word + i) = (char*)malloc(sizeof(char) * 51);
	}
	
	for(i = 0 ; i < N ; i++)
	{
		count = 0;
		scanf("%[^\n]s", &str); BufferClear;
		
		for(j = 0 ; j < 51 ; j++)
		{
			if(str[j] != 0)
			{
				count++;
			}
			else if(str[j] == 0)
			{
				break;
			}
		}
		*(word.number + i) = count;
		*(word.word + i) = (char*)malloc(sizeof(char) * (*(word.number) + 1));
		strcpy(*(word.word + i) , str);
		//check//
		printf("*(word.number + %d) = %d\n*(word.word + %d) = %s\n", i, *(word.number + i), i, *(word.word + i));
		//check//
	}
	
	int ptrTemp = 0;
	
	for(i = 0 ; i < 51 ; i++)
	{
		count = 0;
		for(j = 0 ; j < N ; j++)
		{
			if(*(word.number + j) == i)
			{
				strcpy(*(temp.word + ptrTemp), *(word.word + j));
				count++;
				ptrTemp++;
			}
			
			for(i = 0 ; i < N ; i++)
			{
				
			}
		}
	}
	
	return 0;
}
