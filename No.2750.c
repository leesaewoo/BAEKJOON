#include <stdio.h>
#include <stdlib.h>

int *pa;
void BUFFERCLEAR(void);
void MERGE(int N, int X,int real_N);

//TO DO//
//1. ㅋ... 
//TO DO// 

int main(void)
{
	int N;
	scanf("%d", &N);
	
	int real_N = N;
	
	if(N % 2 == 0)
	{
		pa = malloc(sizeof(int) * N);
	}
	else if(N % 2 == 1)
	{
		pa = malloc(sizeof(int) * (N + 1));
	}
	
	int i;
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &*(pa + i));
		BUFFERCLEAR;
	}
	
	MERGE(N, 2, real_N);
	
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

void MERGE(int N, int X, int real_N)
{
	int T[N];
	int A[X];
	int n;
	int check = 0;
	int max1, max2; // 포인터는 (X / 2) - 1 만큼만 이동 가능 
	int count = real_N;
	int temp = X;
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
			if(count - X > 0)
			{
				count -= X;
			}
			else if(count - X < 0)
			{
				X = count;
			}

			if(ptr2 >= real_N)
			{
				check = 2;
			}
			
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
			else if(*(pa + ptr1) <= *(pa + ptr2))
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
			else if(*(pa + ptr1) >= *(pa + ptr2))
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
		
		if(count - X < 0)
		{	
			for(j = 0 ; j < count ; j++)
			{
				T[i * X + j] = A[j];
			}
		}
		else
		{
			for(j = 0 ; j < X ; j++)
			{
				T[i * X + j] = A[j];
			}
		}
	}
	
	for(i = 0 ; i < real_N ; i++)
	{
		*(pa + i) = T[i];
	}
	
	if(n != 1)
	{
		MERGE(n / 2, temp * 2, real_N);
	}
}
