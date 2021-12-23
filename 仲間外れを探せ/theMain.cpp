#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;


int main()
{

	vector<pair<int, float>> n;

	for (int i = 0; i < 4; i++)
	{
		float tmp;
		cin >> tmp;

		n.emplace_back(std::make_pair(tmp, i + 1));
	}
	for (int i = 0; i < n.size(); i++)
	{
		n[i].first = n[i].first / (float)n[i].second;
		cout << n[i].first << ", " << n[i].second << endl;
	}

	vector<bool> isEq(n.size());
	for (int i = 0; i < n.size(); i++)
	{
		cout << i % n.size() << "," << (i + 1) % n.size() << endl;
		//if(n[i % n.size()]==n[(i+1)%n.size()])
	}

	return 0;
}