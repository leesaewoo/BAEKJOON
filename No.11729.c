#include <stdio.h>
#include <stdlib.h>

void move_1(int N, int *p1, int *p2, int *p3);

unsigned int ptr_1, ptr_2, ptr_3 = 0; // 1,2,3�� ������ �����͵� 
int counter = 0;

//TO DO LIST//
//1. ��Ģ ã�� 
//TO DO LIST// 

int main(void)
{
	int N, i;
	scanf("%d", &N);
	
	ptr_1 = N - 1;
	
	int *p1 = (int*)malloc(sizeof(int) * N);
	int *p2 = (int*)malloc(sizeof(int) * N);
	int *p3 = (int*)malloc(sizeof(int) * N);
	
	for(i = 0 ; i < N ; i++) //�����Ҵ� �迭�� �ʱ�ȭ 
	{
		*(p1 + i) = N - i;
		*(p2 + i) = 0;
		*(p3 + i) = 0;
	}
	

	if(*(p1 + ptr_1) == 1 && N % 2 == 0)	//������ ������ ¦�� = 2�� ������
	{
		*(p2 + ptr_2) = *(p1 + ptr_1);
		*(p1 + ptr_1) = 0;
		ptr_1--;
		counter++;
		printf("1 2\n");
	}
	else if(*(p1 + ptr_1) == 1 && N % 2 == 1)	//������ ������ Ȧ�� = 3�� ������
	{
		*(p3 + ptr_3) = *(p1 + ptr_1);
		*(p1 + ptr_1) = 0;
		ptr_1--;
		counter++;
		printf("1 3\n");
	}

	while(1)
	{
		if(*(p1 + 0) == 0 && *(p2 + 0) == 0)
		{
			break;
		}
		move_1(N, &*p1, &*p2, &*p3);
	}

	
	
	free(p1); free(p2); free(p3);
	
	return 0;
}

void move_1(int N, int *p1, int *p2, int *p3)
{
	if((*(p2 + ptr_2) > *(p1 + ptr_1) || *(p2 + ptr_2) == 0) && *(p1 + ptr_1) != 0)
	{
			if(ptr_2 != 0)
			{
				ptr_2++;
			}
			*(p2 + ptr_2) = *(p1 + ptr_1);
			*(p1 + ptr_1) = 0;
			if(ptr_1 != 0)
			{
				ptr_1--;
			}
			counter++;
			printf("1 2\n");
	}
	else if((*(p3 + ptr_3) > *(p1 + ptr_1) || *(p3 + ptr_3) == 0) && *(p1 + ptr_1) != 0)
	{
			if(ptr_3 != 0)
			{
				ptr_3++;
			}
			*(p3 + ptr_3) = *(p1 + ptr_1);
			*(p1 + ptr_1) = 0;
			if(ptr_1 != 0)
			{
				ptr_1--;
			}
			counter++;
			printf("1 3\n");
	}
	else if((*(p2 + ptr_2) > *(p3 + ptr_3) || *(p2 + ptr_2) == 0) && *(p3 + ptr_3) != 0)
	{
			if(ptr_2 != 0)
			{
				ptr_2++;
			}
			*(p2 + ptr_2) = *(p3 + ptr_3);
			*(p3 + ptr_3) = 0;
			if(ptr_3 != 0)
			{
				ptr_3--;
			}
			counter++;
			printf("3 2\n");
	}
	else if((*(p3 + ptr_3) > *(p2 + ptr_2) || *(p3 + ptr_3) == 0) && *(p2 + ptr_2) != 0)
	{
			if(ptr_3 != 0)
			{
				ptr_3++;
			}
			*(p3 + ptr_3) = *(p2 + ptr_2);
			*(p2 + ptr_2) = 0;
			if(ptr_2 != 0)
			{
				ptr_2--;
			}
			counter++;
			printf("2 3\n");
	}
	else if((*(p1 + ptr_1) > *(p2 + ptr_2) || *(p1 + ptr_1) == 0) && *(p2 + ptr_2) != 0)
	{
			if(ptr_1 != 0)
			{
				ptr_1++;
			}
			*(p1 + ptr_1) = *(p2 + ptr_2);
			*(p2 + ptr_2) = 0;
			if(ptr_2 != 0)
			{
				ptr_2--;
			}
			counter++;
			printf("2 1\n");
	}
	else if((*(p1 + ptr_1) > *(p3 + ptr_3) || *(p1 + ptr_1) == 0) && *(p3 + ptr_3) != 0)
	{
			if(ptr_1 != 0)
			{
				ptr_1++;
			}
			*(p1 + ptr_1) = *(p3 + ptr_3);
			*(p3 + ptr_3) = 0;
			if(ptr_3 != 0)
			{
				ptr_3--;
			}
			counter++;
			printf("3 1\n");
	}
}
