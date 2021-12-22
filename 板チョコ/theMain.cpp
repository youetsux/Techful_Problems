#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//板チョコ
//1行目に縦のくぼみの数Hが与えられます。
//2行目に横のくぼみの数Wが与えられます

//縦にH本くぼみがあるとチョコはH＋１列に割ることができる
//同様に横にW本くぼみがあるとちょこはW+1行に割ることができる
//ので。。。
int main()
{
	int tmp_w, tmp_h;
	cin >> tmp_w;
	cin >> tmp_h;
	cout << (tmp_w + 1) * (tmp_h + 1) << endl;
}