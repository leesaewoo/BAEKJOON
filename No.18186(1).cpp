#include <iostream>

using namespace std;

int FindMin(int a, int b, int c)
{
	int min = a;
	
	if(min > b)
	{
		min = b;
		
		if(min > c)
		{
			min = c;
		}
	}
	else if(min > c)
	{
		min = c;
	}
	
	return min;
}

int main()
{
	int N, B, C;
    cin >> N;
	cin >> B;
	cin >> C;

    int arrayA[N];
	
	for(int i = 0 ; i < N ; i++)
	{
		cin >> arrayA[i];
	}
	
    int sum = 0;
	
	int maxOfMin = 0;
	
	int index = 0;
	
	if(B > C)
	{
	    for(int i = 0; i < N; i++)
	    {
	        //3, 2, 1���� ��� Ž��, �ּҰ��� ����
			// ū  ���� Ž�� (�ּҰ��� ���� ���������� ���� ������ ���� ���� ū ������ �켱) 
			if(arrayA[i] != 0)
			{
				if(N - i >= 2 && arrayA[i + 1] != 0)
				{
					if(N - i >= 3 && arrayA[i + 2] != 0)
					{
						if(maxOfMin < FindMin(arrayA[i], arrayA[i + 1], arrayA[i + 2]);	
						{
							maxOfMin = FindMin(arrayA[i], arrayA[i + 1], arrayA[i + 2]);
							index = i;
						}
						else if(maxOfMin == FindMin(arrayA[i], arrayA[i + 1], arrayA[i + 2]))
						{
							if(arrayA[index] + arrayA[index + 1] + arrayA[index + 2] < arrayA[i] + arrayA[i + 1] + arrayA[i + 2])
							{
								maxOfMin = FindMin(arrayA[i], arrayA[i + 1], arrayA[i + 2]);
								index = i;
							}
						}
					}
				}
			}
	        
	    }
	}
	else if(B <= C)
	{
	    for(int i = 0; i < N; i++)
	    {
	        if(arrayA[i] != 0)
	        {
            	sum += B * arrayA[i];
                arrayA[i] = 0;
	        }
	    }
	}
    
    cout << sum;
}

