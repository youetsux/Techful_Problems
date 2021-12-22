#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int tmpa, tmpb;
	cin >> tmpa >> tmpb;

	for (int i = 1; i <= 30; i++)
	{
		if (i % tmpa == 0 && i % tmpb == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else
		{
			if (i % tmpa == 0)
			{
				cout << "Fizz" << endl;
			}
			else if (i % tmpb == 0)
			{
				cout << "Buzz" << endl;
			}
			else
				cout << i << endl;
		}
	}
}