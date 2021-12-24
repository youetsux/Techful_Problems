#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main()
{
	vector<string> ilist;
	int num;
	cin >> num;
	string input;
	cin >> input;

	for (auto i = 0; i < input.length(); i++)
	{
		string tmp = input.substr(input.length() - 1, 1);
		input.pop_back();
		input = tmp + input;
		ilist.push_back(input);	
	}
	sort(ilist.begin(), ilist.end());

	cout << ilist[0] << endl;
	return 0;
}