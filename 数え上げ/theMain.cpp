#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//数え上げ
//最小値Min以上、最大値Max以下の自然数のうち、ある自然数Xによって割り切れるものの個数を求めてください。

//必殺馬鹿正直戦法
//int main()
//{
//	int tmin,tmax, tx;
//	cin >> tmin;
//	cin >> tmax;
//	cin >> tx;
//	int count = 0;
//	for (int i = tmin; i <= tmax; i++)
//	{
//		if (i % tx == 0)count = count+1;
//	}
//	cout << count << endl;
//}
//これだと、時間制限に引っかかる
//ので、頭を使う
//?@１ 〜 MINまでにXの約数はMIN/X個 ある
//?A１ 〜 MAXまでにXの約数はMAX/X個 ある
//例；MINが２１、MAXが３１、Xが５の時の?@?Aは
//?@ 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" 21  
//   [5,10,15,20] 21/5=4
//?A 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" 21 22 23 24 "25" 26 27 28 29 "30" 31
//   [5,10,15,20,25,30] 31/5=6
//この差分を求めればよいことになる。そんで、MIN以上、MAX以下なので、?Aに含まれる約数の数からからMIN-1より下の約数の数をひけばいいよね
//?@ 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" ｜21　←MIN以上  
//?A 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" ｜21 22 23 24 "25" 26 27 28 29 "30" 31　←MAX以下
//31/5 - (21-1)/5 = 6 - 4 = 2個になる。

#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//数え上げ
//最小値Min以上、最大値Max以下の自然数のうち、ある自然数Xによって割り切れるものの個数を求めてください。
//計算して出すよ
//
int main()
{
	long int tmin, tmax, tx;
	cin >> tmin;
	cin >> tmax;
	cin >> tx;

	cout << tmax / tx - (tmin - 1) / tx << endl;
}