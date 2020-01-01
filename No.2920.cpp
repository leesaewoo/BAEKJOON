#include <iostream>

using namespace std;

int main()
{
	int num, nextNum;
	
	cin >> num;
	
	if(num == 1) // ascending
	{
		for(int i = 0 ; i < 7 ; i++)
		{
			cin >> nextNum;
			
			if(nextNum - 1 != num)
			{
				cout << "mixed";
				break;
			}
			else if(i == 6)
			{
				cout << "ascending";
				break;
			}
			
			num = nextNum;
		}
	}
	else if(num == 8) // descending
	{
		for(int i = 0 ; i < 7 ; i++)
		{
			cin >> nextNum;
			
			if(nextNum + 1 != num)
			{
				cout << "mixed";
				break;
			}
			else if(i == 6)
			{
				cout << "descending";
				break;
			}
			
			num = nextNum;
		}
	}
	else // mixed
	{
		cout << "mixed";
	}
	
	return 0;
}
