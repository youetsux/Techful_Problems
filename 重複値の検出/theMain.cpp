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
	vector<string> strs,dups;
	cin >> itmp;
	std::stringstream ss(itmp);
	
	while (getline(ss,stmp, ',')) {
		auto res = std::find(strs.begin(), strs.end(), stmp);
		if (res != strs.end()) {
			auto res2 = std::find(dups.begin(), dups.end(), *res);
			if(res2 == dups.end())
				dups.push_back(stmp);
		}
		strs.push_back(stmp);
	}
	
	if (!dups.empty()){
		for (int i=0;i<dups.size();i++)
		{
			if (i < dups.size() - 1)
				cout << dups[i] << ",";
			else
				cout << dups[i];
		}
	}
	else
	{
		cout << "Unique" << endl;
	}
	
	return 0;
}