#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//FPS�ƕb�J�E���g
int main()
{
	const int fps = 60;
	double sec, frame;
	cin >> sec;
	
	frame = sec * fps;
	cout << (int)frame << endl;
}