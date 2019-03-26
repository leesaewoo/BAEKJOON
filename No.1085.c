#include <stdio.h>

void min(int x, int y, int w, int h, int *px, int *py);
void compare(int x, int y);

int main(void)
{
	int x, y, w, h;
	scanf("%d", &x);	scanf("%d", &y);	scanf("%d", &w);	scanf("%d", &h); 
	
	int *px = &x;
	int *py = &y;
	
	min(x, y, w, h, px, py);
	
	compare(x, y);
	
	return 0;
}

void min(int x, int y, int w, int h, int *px, int *py)
{//x = 0 老锭客 x = w 老锭, y = 0 老锭客 y = h 老锭 
	if(x > w / 2)
	{
		*px = w - x;
	}
	else
	{
		*px = x;
	}
	
	if(y > h / 2)
	{
		*py = h - y;
	}
	else
	{
		*py = y;
	}
}

void compare(int x, int y)
{
	if(x > y)
	{
		printf("%d\n", y);
	}
	else
	{
		printf("%d\n", x);
	}
}
