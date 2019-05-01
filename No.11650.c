#include <stdio.h>
#include <stdlib.h>

/* TODO (#1#): Line 55 */

void BufferClear(void)
{
	while(getchar() != '\n');
}

typedef struct _Coordinate{
	int x; // -100000 <= x,y <= 1000000
	int y;
}Coordinate;

void Heapify(Coordinate *cPtr, int heapSize, int halfHeapSize);

int main(void)
{
	int heapSize;
	scanf("%d", &heapSize); BufferClear();
	
	int halfHeapSize;
	
	if(heapSize % 2 == 0)
	{
		halfHeapSize = heapSize / 2;
	}
	else
	{
		halfHeapSize = (heapSize + 1) / 2;
	}
	
	Coordinate *cPtr[heapSize];
	
	int i;
	for(i = 0 ; i < sizeof(cPtr) / sizeof(struct _Coordinate *) ; i++)
	{
		cPtr[i] = malloc(sizeof(struct _Coordinate));
	}
	
	for(i = 0 ; i < heapSize ; i++)
	{
		scanf("%d %d", &cPtr[i]->x, &cPtr[i]->y); BufferClear();
	}
	
	int arrayASC[heapSize];
	for(i = halfHeapSize ; i >= 0 ; i--)
	{
		Heapify(cPtr, heapSize, i);
	}
	
	for(i = halfHeapSize ; i >= 0 ; i--)
	{
		
		Haepify(cPtr, heapSize, i)
	}
	
	
	return 0;
}

void Heapify(Coordinate *cPtr, int heapSize, int halfHeapSize)
{
	int temp;
	if(halfHeapSize != 0)
	{
		if(cPtr[(halfHeapSize - 1) * 2 + 1]->x > cPtr[halfHeapSize - 1]->x && (halfHeapSize - 1) * 2 + 1 < heapSize)
		{
			temp = cPtr[(halfHeapSize - 1) * 2 + 1]->x;
			cPtr[(halfHeapSize - 1) * 2 + 1]->x = cPtr[halfHeapSize - 1]->x;
			cPtr[halfHeapSize - 1]->x = temp;
			
			Heapify(Coordinate *cPtr, heapSize, halfHeapSize * 2);
		}
		if(heapArray[(halfHeapSize - 1) * 2 + 2] > heapArray[halfHeapSize - 1] && (halfHeapSize - 1) * 2 + 2 < heapSize)
		{
			temp = cPtr[(halfHeapSize - 1) * 2 + 2]->x;
			cPtr[(halfHeapSize - 1) * 2 + 2]->x = cPtr[halfHeapSize - 1]->x;
			cPtr[halfHeapSize - 1]->x = temp;
			
			Heapify(Coordinate *cPtr, heapSize, halfHeapSize * 2 + 1);
		}
		
		//check
		int i;
		printf("----\n");
		for(i = 0 ; i < heapSize ; i++)
		{
			printf("%d\n", cPtr[i]->x);
		}
		printf("----\n");
		//check
	}
}
