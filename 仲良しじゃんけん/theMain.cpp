#include <iostream>


using std::cout;
using std::cin;
using std::endl;



//���ǂ�����񂯂�
// ����	 ��
//  0	�O�[
//  1	�`���L
//  2	�p�[
int main()
{
	int tmp1,tmp2;
	int tmp3;
	cin >> tmp1;
	cin >> tmp2;

	//�Q�l����������o���Ă�����A��������������Ȃ��Ƃ������ɂȂ�Ȃ�
	if (tmp1 == tmp2) tmp3 = tmp1;
	else
	{
		//�Q�l���ʂ̎���o���Ă����玩���́A�Q�l�Ƃ͕ʂ̎���o���Ȃ��Ƃ������ɂȂ�Ȃ�
		//[0,1], [1,2], [2,0]�̂R�p�^�[�����邯�ǁA�Q�l�̎�̘a���R��������Əo����Ă��Ȃ��肪�킩��
		tmp3 = 3 - tmp2 - tmp1;
	}
	cout << tmp3 << endl;
}