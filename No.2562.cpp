#include <iostream>

using namespace std;

int main()
{
	int n;
	int max = 0;
	int count = 0;
	
	for(int i = 0 ; i < 9 ; i++)
	{
		cin >> n;
		if(max < n)
		{
			max = n;
			count = i + 1;
		}
	}
	
	cout << max << endl;
	cout << count;
}
