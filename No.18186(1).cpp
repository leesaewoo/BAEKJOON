#include <iostream>

using namespace std;

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

	if(B > C)
	{
	    for(int i = 0; i < N; i++)
	    {
	        while (arrayA[i] != 0)
	        {
	            if (N - i >= 2 && arrayA[i + 1] > 0)
	            {
                    if (N - i >= 3 && arrayA[i + 2] > 0)
                    {
                    	int min = arrayA[i];
                    	
                    	if(min > arrayA[i+1])
                    	{
                    		min = arrayA[i+1];
                    		
                    		if(min > arrayA[i+2])
                    		{
                    			min = arrayA[i+2];
							}
						}
						else if(min > arrayA[i+2])
						{
							min = arrayA[i+2];
						}
                    	
                        arrayA[i + 2] -= min;
                        arrayA[i + 1] -= min;
                        arrayA[i] -= min;
                        sum += min * (B + 2 * C);
                    }
                    else
                    {
                    	int min = arrayA[i];
                    	
                    	if(min > arrayA[i+1])
                    	{
                    		min = arrayA[i+1];
						}
                    	
                        arrayA[i + 1] -= min;
                        arrayA[i] -= min;
                        sum += min * (B + C);
                    }
	            }
	            else
	            {
	            	sum += B * arrayA[i];
	                arrayA[i] = 0;
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

