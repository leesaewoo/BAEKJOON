#include <stdio.h>
#include <stdlib.h>

int *pa;
void BUFFERCLEAR(void);
void MERGE(int N, int X);

//TO DO//
//1.  real N 값 함수에 매개변수로 추가해서 ptr2 == real N && max1 == 0 일 때 NULL값 넣기//
//TO DO// 

int main(void)
{
	int N;
	scanf("%d", &N);
	
	pa = malloc(sizeof(int) * N);
	
	int i;
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &*(pa + i));
		BUFFERCLEAR;
	}
	
	MERGE(N, 2);
	
	for(i = 0 ; i < N ; i++)
	{
		printf("%d\n", *(pa + i));
	}
	
	free(pa);
	return 0;
}

void BUFFERCLEAR(void)
{
	while(getchar() != '\n');
}

void MERGE(int N, int X)
{
	int A[X];
	int n;
	int check = 0;
	int max1, max2; // 포인터는 (X / 2) - 1 만큼만 이동 가능 
	
	if(N % 2 == 1)
	{
		n = (N + 1) / 2;
	}
	else
	{
		n = N / 2;
	}
	
	int ptr1 = 0;
	int ptr2 = 0;
	int i, j;
	
	for(i = 0 ; i < n ; i++)
	{
		max1 = (X / 2) - 1;
		max2 = (X / 2) - 1;
		ptr1 = i * X;
		ptr2 = ptr1 + (X / 2);
		
		for(j = 0 ; j < X ; j++)
		{
			if(check == 1)
			{
				A[j] = *(pa + ptr2);
				ptr2++;
			}
			else if(check == 2)
			{
				A[j] = *(pa + ptr1);
				ptr1++;
			}
			else if(*(pa + ptr1) < *(pa + ptr2))
			{
				A[j] = *(pa + ptr1);
				
				if(max1 != 0)
				{
					max1--;
					ptr1++;
				}
				else if(max1 == 0)
				{
					check = 1;
				}
			}
			else if(*(pa + ptr1) > *(pa + ptr2))
			{
				A[j] = *(pa + ptr2);
				
				if(max2 != 0)
				{
					max2--;
					ptr2++;
				}
				else if(max2 == 0)
				{
					check = 2;
				}
			}
		}
		
		for(j = 0 ; j < X ; j++)
		{
			*(pa + i * X) = A[j];
		}
	}
	
	if(n != 1)
	{
		MERGE(N / 2, X * 2);
	}
}
