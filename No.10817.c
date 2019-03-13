#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	
	if(A >= B)
	{
		if(B >= C) // A>B>C
		{
			printf("%d\n", B);
		}
		else if(B <= C && A >= C) // A>C>B
		{
			printf("%d\n", C);
		}
		else if(B <= C && C >= A) // C>A>B
		{
			printf("%d\n", A);
		}
	}
	else if(A >= C)
	{
		if(B >= A) // B>A>C
		{
			printf("%d\n", A);
		}
	}
	else if(B >= A)
	{
		if(B >= C && C >= A) // B>C>A
		{
			printf("%d\n", C);
		}
		else if(C >= B) //C>B>A
		{
			printf("%d\n", B);
		}
	}
	
	return 0;
}
