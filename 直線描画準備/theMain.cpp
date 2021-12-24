#include <iostream>
#include <cmath>


using std::cin;
using std::cout;
using std::endl;

const int xmax = 2159;
const int ymax = 4095;

class v2
{
public:
	float x, y;
	v2() {};
	v2(float _x, float _y) :x(_x), y(_y) {}
};
//値の境界のチェック
bool checkBoundary(const v2& _a)
{
	if (_a.x < 0 || _a.y < 0 || _a.x > xmax || _a.y > ymax)
	{
		return false;
	}
	else
		return true;
}
//傾きのチェック
bool checkTangent(const v2& _a, const v2& _b)
{
	if (abs(_a.x - _b.x) < abs(_a.y - _b.y))
		return false;
	else
		return true;
}

void convertCordinate(v2& _a)
{
	_a.y = ymax - _a.y;
}
//内積の計算
double dotProduct(const v2& _a, const v2& _b)
{
	return(_a.x * _b.x + _a.y * _b.y);
}

//単位ベクトルを返す
v2 identifyVec(v2& _a)
{
	v2 tmp;
	tmp.x =  _a.x / sqrt(_a.x * _a.x + _a.y * _a.y);
	tmp.y =  _a.y / sqrt(_a.x * _a.x + _a.y * _a.y);
	return(tmp);
}

int main()
{
	v2 a, b, c;
	cin >> a.x >> a.y;
	cin >> b.x >> b.y;
	//x,yの存在範囲＋y軸の変化量の方が大きい時を省く
	if (checkBoundary(a) && checkBoundary(b) && checkTangent(a,b)) {
		//左下原点の座標系に変換する
		convertCordinate(a);
		convertCordinate(b);

		//ベクトル→c = →abを作る（xの小さいほうが始点）
		if (a.x >= b.x) {
			c.x = a.x - b.x;
			c.y = a.y - b.y;
		}
		else
		{
			c.x = b.x - a.x;
			c.y = b.y - a.y;
		}
		//単位ベクトル化する
		v2 d = identifyVec(c);
		//アークタンジェントで、x軸からどのくらい回転してるかを得る
		//(atan2(d.y, d.x) >= 0 の時はベクトルがx軸に平行～第1象限に存在＝右上がり
		//(atan2(d.y, d.x) < 0  の時はベクトルが第4象限に存在＝右下がり
		//画像の座標軸（左上原点）では回転角度の判定がちょっとめんどくさいので、通常のデカルト座標系（左下原点）
		//に変換してから、傾き（回転角度）の計算を行う
 		if (atan2(d.y, d.x) >= 0)
		{
			cout << "U " << abs(c.x) << " " << abs(c.y) << endl;
		}
		else
		{
			cout << "D " << abs(c.x) << " " << abs(c.y) << endl;
		}
	}
	else
	{
		cout << "Error" << endl;
		return 0;
	}


	return 0;
}