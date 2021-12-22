#include <iostream>


using std::cout;
using std::cin;
using std::endl;



//仲良しじゃんけん
// 数字	 手
//  0	グー
//  1	チョキ
//  2	パー
int main()
{
	int tmp1,tmp2;
	int tmp3;
	cin >> tmp1;
	cin >> tmp2;

	//２人が同じ手を出していたら、自分も同じじゃないとあいこにならない
	if (tmp1 == tmp2) tmp3 = tmp1;
	else
	{
		//２人が別の手を出していたら自分は、２人とは別の手を出さないとあいこにならない
		//[0,1], [1,2], [2,0]の３パターンあるけど、２人の手の和を３から引くと出されていない手がわかる
		tmp3 = 3 - tmp2 - tmp1;
	}
	cout << tmp3 << endl;
}