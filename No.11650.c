#include <stdio.h>
#include <stdlib.h>

/* TODO (#1#): TIME OVER -> CHANGE TO MERGE SORT OR HEAP SORT */

void BufferClear(void)
{
	while(getchar() != '\n');
}

typedef struct _Coordinate{
	int x; // -100000 <= x,y <= 1000000
	int y;
}Coordinate;

void CoordinateSort(struct _Coordinate *cPtr[], int N);

int main(void)
{
	int N;
	scanf("%d", &N); BufferClear();
	
	Coordinate *cPtr[N];
	
	int i;
	for(i = 0 ; i < sizeof(cPtr) / sizeof(struct _Coordinate *) ; i++)
	{
		cPtr[i] = malloc(sizeof(struct _Coordinate));
	}
	
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d %d", &cPtr[i]->x, &cPtr[i]->y); BufferClear();
	}
	
	CoordinateSort(cPtr, N);
	
	
	return 0;
}

void CoordinateSort(struct _Coordinate *cPtr[], int N)
{
	int i, tempCoordinate;
	if(N == 1)
	{
		printf("%d %d\n", cPtr[0]->x, cPtr[0]->y);
	}
	else
	{
		for(i = 0 ; i < N - 1 ; i++)
		{
			if(cPtr[i]->x < cPtr[i + 1]->x)
			{
				tempCoordinate = cPtr[i]->x;
				cPtr[i]->x = cPtr[i + 1]->x;
				cPtr[i + 1]->x = tempCoordinate;
				tempCoordinate = cPtr[i]->y;
				cPtr[i]->y = cPtr[i + 1]->y;
				cPtr[i + 1]->y = tempCoordinate;
			}
			else if(cPtr[i]->y < cPtr[i + 1]->y)
			{
				tempCoordinate = cPtr[i]->x;
				cPtr[i]->x = cPtr[i + 1]->x;
				cPtr[i + 1]->x = tempCoordinate;
				tempCoordinate = cPtr[i]->y;
				cPtr[i]->y = cPtr[i + 1]->y;
				cPtr[i + 1]->y = tempCoordinate;
			}
		}
		printf("%d %d\n", cPtr[i]->x, cPtr[i]->y);
		
		CoordinateSort(cPtr, N - 1);
	}
}
