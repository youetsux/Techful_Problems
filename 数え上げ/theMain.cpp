#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//�����グ
//�ŏ��lMin�ȏ�A�ő�lMax�ȉ��̎��R���̂����A���鎩�R��X�ɂ���Ċ���؂����̂̌������߂Ă��������B

//�K�E�n��������@
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
//���ꂾ�ƁA���Ԑ����Ɉ���������
//�̂ŁA�����g��
//�@�P �` MIN�܂ł�X�̖񐔂�MIN/X�� ����
//�A�P �` MAX�܂ł�X�̖񐔂�MAX/X�� ����
//��GMIN���Q�P�AMAX���R�P�AX���T�̎��̇@�A��
//�@ 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" 21  
//   [5,10,15,20] 21/5=4
//�A 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" 21 22 23 24 "25" 26 27 28 29 "30" 31
//   [5,10,15,20,25,30] 31/5=6
//���̍��������߂�΂悢���ƂɂȂ�B����ŁAMIN�ȏ�AMAX�ȉ��Ȃ̂ŁA�A�Ɋ܂܂��񐔂̐����炩��MIN-1��艺�̖񐔂̐����Ђ��΂������
//�@ 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" �b21�@��MIN�ȏ�  
//�A 1 2 3 4 "5" 6 7 8 9 "10" 11 12 13 14 "15" 16 17 18 19 "20" �b21 22 23 24 "25" 26 27 28 29 "30" 31�@��MAX�ȉ�
//31/5 - (21-1)/5 = 6 - 4 = 2�ɂȂ�B

#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//�����グ
//�ŏ��lMin�ȏ�A�ő�lMax�ȉ��̎��R���̂����A���鎩�R��X�ɂ���Ċ���؂����̂̌������߂Ă��������B
//�v�Z���ďo����
//
int main()
{
	long int tmin, tmax, tx;
	cin >> tmin;
	cin >> tmax;
	cin >> tx;

	cout << tmax / tx - (tmin - 1) / tx << endl;
}