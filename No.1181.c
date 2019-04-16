#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	Word word;
	
	int N;
	char temp[51];
	scanf("%d", &N); BufferClear(); // 1 <= N <= 20000
	
	word.word = (char**)malloc(sizeof(char*) * N);
	word.number = (int*)malloc(sizeof(int) * N);
	
	*(word.number + 1) = 1;
	
	int i, j, count;
	for(i = 0 ; i < N ; i++)
	{
		count = 0;
		scanf("%[^\n]s", &temp); BufferClear();
		
		for(j = 0 ; j < 51 ; j++)
		{
			if(temp[j] != 0)
			{
				count++;
			}
			else if(temp[j] == 0)
			{
				break;
			}
		}
		*(word.number + i) = count;
		*(word.word + i) = (char*)malloc(sizeof(char) * (*(word.number) + 1));
		strcpy(*(word.word + i) , temp);
		//check//
		printf("*(word.number + %d) = %d\n*(word.word + %d) = %s\n", i, *(word.number + i), i, *(word.word + i));
		//check//
	}
	
	return 0;
}
