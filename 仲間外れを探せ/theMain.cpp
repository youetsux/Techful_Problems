#include <iostream>
#include <tuple>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;

//���ԊO���T��
//(x ,y) = (1, y0) (2, y1) (3, y2) (4, y3)�@��y0�`y3�̒�����
//���֌W�ɂȂ����̂�T���B
//�l�����͂��낢�날�邯�ǁA�����̕���������O�����́A�Ƃ����Ƃ��炢���
//���Ƃ��ẮA
//�@�x�N�g���̕��s�������g���B�@��၁�x�N�g�������ƁA�x�N�g���̃X�J���[�{�ŕ\����
//�Ay=ax+b��a���o�������萔���o���āA���萔�̒��ԊO���������
//�@�͈����Z����������K�v�ɂȂ�̂ŁA����Z���񂩂ōl������A�ōl���Ă݂�
int main()
{
	//�ʂɂ����̔z��ł��������ǁAx,y��
	//�y�A���������ق������낢��֗�����
	//tuple��pair�̓f�[�^�����Ƃ��֗�������g�����o�����ق���������
	vector<pair<int, float>> n;

	for (int i = 0; i < 4; i++)
	{
		float tmp;
		cin >> tmp;

		n.emplace_back(std::make_pair(i + 1, tmp));
	}
	//��{�I�ɒ��ԊO��͈�C�炵���̂ŁA�𒼂�3�l�̔�r���J��Ԃ���
	//�Z�A�~�A�Z�@�̃p�^�[�����o����A�~�����ԊO����Ĕ���
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