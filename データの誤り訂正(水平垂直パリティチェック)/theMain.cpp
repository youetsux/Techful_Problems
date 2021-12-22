#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

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

int main()
{
	int n;
	cin >> n;
	vector<string> barray;
	string entmp;
	cin >> entmp;

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		barray.push_back(tmp);
	}
	for (auto n : barray)
	{
		cout << n << endl;
		cout << binToUInt(n) << endl;
	}
}