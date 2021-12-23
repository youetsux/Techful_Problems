#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::boolalpha;
using std::pair;

unsigned int binToUInt(const std::string& str)
{
	unsigned int val = 0;
	for (int i = 0; i < (int)str.size(); ++i) {
		switch (str[i]) {
		case '0':
			val *= 2;
			break;
		case '1':
			val = val * 2 + 1;
			break;
		}
	}
	return val;
}

bool hpCheck(string _dat, string _eo)
{
	int n = 0;

	if (_eo == "odd")
	{
		for (auto i : _dat)
		{
			if (i == '1')n++;
		}
		if (n % 2 == 1)return true;
		else return false;
	}
	else if (_eo == "even")
	{
		for (auto i : _dat)
		{
			if (i == '1')n++;
		}
		if (n % 2 == 0)return true;
		return false;
	}
	else
	{
		return false;
	}
}

bool vpCheck(int _n, string _vp, vector<string> _dat, string _eo)
{
	string stmp = "";
	int n = 0;

	for (auto s : _dat)
	{
		if (s[_n] == '1')n++;
		//stmp = stmp + s[_n];
	}
	//stmp = stmp + _vp[_n];
	if (_vp[_n] == '1')n++;

	if (_eo == "odd")
	{
		if (n % 2 == 1)return true;
		else return false;
	}
	else if (_eo == "even")
	{
		if (n % 2 == 0)return true;
		return false;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;
	cin >> n;
	vector<string> barray;
	string entmp, hp, vp;
	cin >> entmp;

	if (entmp != "odd" && entmp != "even") {
		cout << "Error" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		barray.push_back(tmp);
	}
	cin >> vp;

	pair<int, int> index;

	cout << "水平パリティチェック" << endl;
	for (int i = 0; i < barray.size(); i++)
	{
		//cout << boolalpha << hpCheck(barray[i], entmp) << endl;
		//cout << binToUInt(n) << endl;
		if (hpCheck(barray[i], entmp) == false)
			index.first = i;
	}
	cout << "垂直パリティチェック" << endl;
	for (int i = 0; i < vp.length(); i++)
	{
		//cout << boolalpha << vpCheck(i, vp, barray, entmp) << endl;
		if (vpCheck(i, vp, barray, entmp) == false)
		{
			index.second = i;
		}
	}

	cout << index.first << ", " << index.second  << endl;
}