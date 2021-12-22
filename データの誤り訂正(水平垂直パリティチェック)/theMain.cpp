#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

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
	}
}