#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

int main()
{	
	string input_tmp;
	map<char, char> refmap = { {'A','4'},{'E','3'},{'G','6'},{'I','1'},{'O','0'},{'S','5'},{'Z','2'} };

	cin >> input_tmp;
	for (int i = 0; i < input_tmp.length(); i++)
	{
		auto theI = refmap.find(input_tmp[i]);
		if (theI != refmap.end())
		{
			input_tmp[i] = theI->second;
		}
	}
	cout << input_tmp << endl;
}