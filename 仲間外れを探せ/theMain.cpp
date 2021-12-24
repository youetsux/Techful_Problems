#include <iostream>
#include <tuple>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;

//仲間外れを探せ
//(x ,y) = (1, y0) (2, y1) (3, y2) (4, y3)　のy0～y3の中から
//比例関係にないものを探す。
//考え方はいろいろあるけど、直線の方程式から外れるもの、とかやるとえらい大変
//作戦としては、
//①ベクトルの平行条件を使う。　比例＝ベクトルを作ると、ベクトルのスカラー倍で表せる
//②y=ax+bのaを出す＝比例定数を出して、比例定数の仲間外れを見つける
//①は引き算がたくさん必要になるので、割り算何回かで考えられる②で考えてみる
int main()
{
	//別にただの配列でもいいけど、x,yの
	//ペアがあったほうがいろいろ便利かと
	//tupleやpairはデータを作るとき便利だから使い方覚えたほうがいいよ
	vector<pair<int, float>> n;

	for (int i = 0; i < 4; i++)
	{
		float tmp;
		cin >> tmp;

		n.emplace_back(std::make_pair(i + 1, tmp));
	}
	//基本的に仲間外れは一匹らしいので、愚直な3値の比較を繰り返して
	//〇、×、〇　のパターンが出たら、×が仲間外れって判定
	int res = -1;
	for (int i = 1; i <= n.size(); i++)
	{
		int i0 = (i - 1) % n.size(), i1 = i % n.size(), i2 = (i + 1) % n.size();
		if (n[i0].second /(float)n[i0].first != n[i1].second / (float)n[i1].first &&
			n[i1].second /(float)n[i1].first != n[i2].second / (float)n[i2].first)
			res = i1;		
	}
	
	cout << n[res].second << endl;
	return 0;
}