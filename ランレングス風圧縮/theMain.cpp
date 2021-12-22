#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;
using std::vector;
using std::stringstream;

string convertRL(string _rl)
{
	string ntmp = "";
	for (int i = 0; i < stoi(_rl.substr(1)); i++)
	{
		ntmp = ntmp + _rl[0];
	}
	return ntmp;
}
int main()
{
	string stmp, itmp;
	vector<string> strs,outstr;
	cin >> itmp;
	stringstream ss(itmp);

	while (getline(ss, stmp, '*')) {
		strs.push_back(stmp);
	}
	for (auto n : strs)
	{
		vector<string> workstr;
		if (n.length() > 2)
		{
			//cout << n << endl;
			stringstream nss(n);
			string ntmp = "";
			while (getline(nss, stmp, '+'))
			{
				workstr.push_back(stmp);
			}
			for (auto nn : workstr)
			{
				//cout << "nn" << nn << endl;
				ntmp = ntmp + convertRL(nn);
			}
			outstr.push_back(ntmp);
		}
		else
		{
			outstr.push_back(convertRL(n));
		}
	}
	for (auto n : outstr)
	{
		cout << n << endl;
	}
}