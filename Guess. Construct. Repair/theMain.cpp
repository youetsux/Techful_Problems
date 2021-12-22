#include <iostream>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;
//Guess.Construct.Repair.

int main()
{
	vector<int> An;
	int tmpN,tmpAn;
	cin >> tmpN;
	cin >> tmpAn;
	An.push_back(tmpAn);
	cin >> tmpAn;
	An.push_back(tmpAn);
	for (int i = 1; i < tmpN-1; i++)
	{
		An.push_back(An[i] - An[i - 1]);
	}
	for (auto n : An)
	{
		cout << n << " ";
	}

}