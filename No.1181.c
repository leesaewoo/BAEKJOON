#include <stdio.h>

void BufferClear()
{
	while(getchar() != '\n');
}

typedef struct Word {
	char word[51];
	int number;
}Word;

int main(void)
{	
	Word word_1;
	int N;
	scanf("%d", &N); BufferClear(); // 1 <= N <= 20000

	int i, j;
	int count;
	for(i = 0 ; i < N ; i++)
	{
		count = 0;
		scanf("%[^\n]s", &word_1.word); BufferClear();
		for(j = 0 ; j < 50 ; j++)
		{
			if(word_1.word[j] != NULL)
			{
				count++;
			}
			else if(word_1.word[j] == NULL)
			{
				break;
			}
		}
		word_1.number = count;
		printf("%d\n", word_1.number); // check, need delete
	}
	
	return 0;
}
