

//�ʐς���~�̔��a�����߂�
// Techful �̑z����iC����j

//#include <stdio.h>
//#include <math.h>
//// ������ #include ��ǉ����� sqrt() ���g����悤�ɂ��Ă�������
//
//int main(void) {
//    double area, radius;
//    const double pai = 3.14159;
//    scanf("%lf", &area);
//
//    // ���a�̌v�Z
//    //��r*r=area
//    radius = sqrt(area / pai);
//
//    printf("%.6f", radius);
//    return 0;
//}


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//�ʐς���~�̔��a�����߂�iC++�z����j
//�����������_�ȉ��U���ŁA��iomanip��
//include���Đݒ肵�Ȃ���Ȃ���
int main()
{
	const double pai = 3.14159;
	double radius, area;
	cin >> area;
	cout << sqrt(area/pai) << endl;
}