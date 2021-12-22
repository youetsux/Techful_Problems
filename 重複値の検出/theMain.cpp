#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main()
{
	string stmp,itmp;
	vector<string> strs;
	cin >> itmp;
	std::stringstream ss(itmp);
	
	while (getline(ss,stmp, ',')) {
		auto res = std::find(strs.begin(), strs.end(), stmp);
		if (res == strs.end()) {
			strs.push_back(stmp);
		}
	}
	
	if (strs.size() != 10) {
		for (int i=0;i<strs.size();i++)
		{
			if (i < strs.size() - 1)
				cout << strs[i] << ",";
			else
				cout << strs[i];
		}
	}
	else
	{
		cout << "Unique" << endl;
	}
	
	return 0;
}