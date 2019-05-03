#include <stdio.h>

void DemicalDiscrimination(short arrayOfDemical[], short numOfDemical);

int main(void)
{
	short numOfDemical;
	
	scanf("%d", &numOfDemical);
	
	short arrayOfDemical[numOfDemical];
	int i;
	for(i = 0 ; i < numOfDemical ; i++)
	{
		scanf("%d", &arrayOfDemical[i]);
	}
	
	DemicalDiscrimination(arrayOfDemical, numOfDemical);
	
	return 0;
}

void DemicalDiscrimination(short arrayOfDemical[], short numOfDemical)
{
	short i, j;
	short count = 0;
	for(i = 0 ; i < numOfDemical ; i++)
	{
		if(arrayOfDemical[i] == 2)
		{
			count++;
		}
		else if(arrayOfDemical[i] != 1)
		{
			for(j = 2 ; j < arrayOfDemical[i] ; j++)
			{
				if(arrayOfDemical[i] % j == 0)
				{
					break;
				}
				
				if(j == arrayOfDemical[i] - 1)
				{
					count++;
				}
			}
		}
	}
	printf("%d\n", count);
}
