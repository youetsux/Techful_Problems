#include <iostream>
#include <string>
using namespace std;

int main()
{
	string tmp;
	cin >> tmp;
	int a=0,b;

	for (int i = 0; i < tmp.length(); i++)
	{
		if (tmp[i] == '1')
		{
			a++;
		}
		else
		{
			b = tmp.length() - a - 1;
			if (tmp[i] == '+')
			{
				cout << a + b << endl;
			}
			else
				cout << a - b << endl;
			
		}
	}
	return 0;
}
