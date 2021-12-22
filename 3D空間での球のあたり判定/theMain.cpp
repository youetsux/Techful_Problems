#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::sqrt;

class v3
{
public:
	int x, y, z;
	v3() {};
	v3(int _x, int _y, int _z) :x(_x), y(_y), z(_z) {}
};
double distance2p(v3 _p1, v3 _p2)
{
	return(sqrt(pow(_p2.x - _p1.x, 2.0)+
		        pow(_p2.y - _p1.y, 2.0)+
		        pow(_p2.z - _p1.z, 2.0)));
}
int main()
{
	v3 p1, p2;
	cin >> p1.x >> p1.y >> p1.z;
	cin >> p2.x >> p2.y >> p2.z;
	double d = distance2p(p1, p2);
	
	if (d >= 9.5 && d <= 10.5)
	{
		cout << "Touched" << endl;
	}
	else if (d < 9.5)
	{
		cout << "Absorbed" << endl;
	}
	else
	{
		cout << "Separated" << endl;
	}

}