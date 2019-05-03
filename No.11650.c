#include <stdio.h>
#include <stdlib.h>

void BufferClear(void)
{
	while(getchar() != '\n');
}

typedef struct _Coordinate{
	int x;
	int y;
}Coordinate;

void Heapify(Coordinate *cPtr[], int heapSize, int halfHeapSize);

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
	
	for(i = halfHeapSize ; i >= 0 ; i--)
	{
		Heapify(cPtr, heapSize, i);
	}
	
	Coordinate *arrayASC[heapSize];
	
	for(i = 0 ; i < sizeof(arrayASC) / sizeof(struct _Coordinate) ; i++)
	{
		arrayASC[i] = malloc(sizeof(struct _Coordinate));
	} 
	
	for(i = heapSize - 1 ; i >= 0 ; i--)
	{
		arrayASC[i]->x = cPtr[0]->x;
		arrayASC[i]->y = cPtr[0]->y;
		
		if(i != 0)
		{
			cPtr[0]->x = cPtr[i]->x;
			cPtr[0]->y = cPtr[i]->y;
			Heapify(cPtr, i, 1);
		}
	}
	
	//check
	for(i = 0 ; i < heapSize ; i++)
	{
		printf("arrayASC[%d]->x = %d  arrayASC[%d]->y = %d\n", i, arrayASC[i]->x, i, arrayASC[i]->y);
	}
	//check
	
	for(i = 0 ; i < heapSize ; i++)
	{
		free(cPtr[i]);
		free(arrayASC[i]);
	}
	
	return 0;
}

void Heapify(Coordinate *cPtr[], int heapSize, int halfHeapSize)
{
	Coordinate temp;
	
	if(halfHeapSize != 0)
	{
		if((halfHeapSize - 1) * 2 + 1 < heapSize)
		{
			if(cPtr[(halfHeapSize - 1) * 2 + 1]->x > cPtr[halfHeapSize - 1]->x)
			{
				temp.x = cPtr[(halfHeapSize - 1) * 2 + 1]->x;
				temp.y = cPtr[(halfHeapSize - 1) * 2 + 1]->y;
				cPtr[(halfHeapSize - 1) * 2 + 1]->x = cPtr[halfHeapSize - 1]->x;
				cPtr[(halfHeapSize - 1) * 2 + 1]->y = cPtr[halfHeapSize - 1]->y;
				cPtr[halfHeapSize - 1]->x = temp.x;
				cPtr[halfHeapSize - 1]->y = temp.y;
				
				Heapify(cPtr, heapSize, halfHeapSize * 2);
			}
			else if(cPtr[(halfHeapSize - 1) * 2 + 1]->x == cPtr[halfHeapSize - 1]->x && cPtr[(halfHeapSize - 1) * 2 + 1]->y > cPtr[halfHeapSize - 1]->y)
			{
				temp.x = cPtr[(halfHeapSize - 1) * 2 + 1]->x;
				temp.y = cPtr[(halfHeapSize - 1) * 2 + 1]->y;
				cPtr[(halfHeapSize - 1) * 2 + 1]->x = cPtr[halfHeapSize - 1]->x;
				cPtr[(halfHeapSize - 1) * 2 + 1]->y = cPtr[halfHeapSize - 1]->y;
				cPtr[halfHeapSize - 1]->x = temp.x;
				cPtr[halfHeapSize - 1]->y = temp.y;
				
				Heapify(cPtr, heapSize, halfHeapSize * 2);
			}
		}
		
		if((halfHeapSize - 1) * 2 + 2 < heapSize)
		{
			if(cPtr[(halfHeapSize - 1) * 2 + 2]->x > cPtr[halfHeapSize - 1]->x)
			{
				temp.x = cPtr[(halfHeapSize - 1) * 2 + 2]->x;
				temp.y = cPtr[(halfHeapSize - 1) * 2 + 2]->y;
				cPtr[(halfHeapSize - 1) * 2 + 2]->x = cPtr[halfHeapSize - 1]->x;
				cPtr[(halfHeapSize - 1) * 2 + 2]->y = cPtr[halfHeapSize - 1]->y;
				cPtr[halfHeapSize - 1]->x = temp.x;
				cPtr[halfHeapSize - 1]->y = temp.y;
				
				Heapify(cPtr, heapSize, halfHeapSize * 2 + 1);
			}
			else if(cPtr[(halfHeapSize - 1) * 2 + 2]->x == cPtr[halfHeapSize - 1]->x && cPtr[(halfHeapSize - 1) * 2 + 2]->y > cPtr[halfHeapSize - 1]->y)
			{
				temp.x = cPtr[(halfHeapSize - 1) * 2 + 2]->x;
				temp.y = cPtr[(halfHeapSize - 1) * 2 + 2]->y;
				cPtr[(halfHeapSize - 1) * 2 + 2]->x = cPtr[halfHeapSize - 1]->x;
				cPtr[(halfHeapSize - 1) * 2 + 2]->y = cPtr[halfHeapSize - 1]->y;
				cPtr[halfHeapSize - 1]->x = temp.x;
				cPtr[halfHeapSize - 1]->y = temp.y;
				
				Heapify(cPtr, heapSize, halfHeapSize * 2 + 1);
			}
		}
		
		//check
		int i;
		printf("----\n");
		for(i = 0 ; i < heapSize ; i++)
		{
			printf("x : %d, y = %d\n", cPtr[i]->x, cPtr[i]->y);
		}
		printf("----\n");
		//check
	}
}
