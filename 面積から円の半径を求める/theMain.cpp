

//面積から円の半径を求める
// Techful の想定解（C言語）

//#include <stdio.h>
//#include <math.h>
//// ここに #include を追加して sqrt() を使えるようにしてください
//
//int main(void) {
//    double area, radius;
//    const double pai = 3.14159;
//    scanf("%lf", &area);
//
//    // 半径の計算
//    //πr*r=area
//    radius = sqrt(area / pai);
//
//    printf("%.6f", radius);
//    return 0;
//}


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//面積から円の半径を求める（C++想定解）
//ただし小数点以下６桁で、はiomanipを
//includeして設定しなきゃないよ
int main()
{
	const double pai = 3.14159;
	double radius, area;
	cin >> area;
	cout << sqrt(area/pai) << endl;
}