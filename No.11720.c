#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	char str[N];
	scanf(" %[^\n]s",str);
	int i, sum = 0;
	
	for(i = 0 ; i < N ; i ++)
	{
		sum += str[i] - '0';
		printf("str[%d] = %d\n",i,str[i]);
	}
	
	printf("%d\n",sum);
	
	return 0;
}
