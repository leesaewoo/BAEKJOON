#include <stdio.h>

int main(void)
{
	int K;
	scanf("%d", &K);
	
	int array[K];
	int i;
	int indexTop = 0;
	for(i = 0 ; i < K ; i++)
	{
		scanf("%d", &array[indexTop]);
		if(array[indexTop] == 0)
		{
			if(indexTop >= 1)
			{
				array[indexTop - 1] = 0;
			}
			indexTop--;
		}
		else
		{
			indexTop++;
		}
	}
	
	int sum = 0;
	for(i = 0 ; i < indexTop ; i++)
	{
		sum += array[i];
	}
	
	printf("%d\n", sum);
	
	return 0;
}
