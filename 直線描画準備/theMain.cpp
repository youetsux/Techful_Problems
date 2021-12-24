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
//�l�̋��E�̃`�F�b�N
bool checkBoundary(const v2& _a)
{
	if (_a.x < 0 || _a.y < 0 || _a.x > xmax || _a.y > ymax)
	{
		return false;
	}
	else
		return true;
}
//�X���̃`�F�b�N
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
//���ς̌v�Z
double dotProduct(const v2& _a, const v2& _b)
{
	return(_a.x * _b.x + _a.y * _b.y);
}

//�P�ʃx�N�g����Ԃ�
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
	//x,y�̑��ݔ͈́{y���̕ω��ʂ̕����傫�������Ȃ�
	if (checkBoundary(a) && checkBoundary(b) && checkTangent(a,b)) {
		//�������_�̍��W�n�ɕϊ�����
		convertCordinate(a);
		convertCordinate(b);

		//�x�N�g����c = ��ab�����ix�̏������ق����n�_�j
		if (a.x >= b.x) {
			c.x = a.x - b.x;
			c.y = a.y - b.y;
		}
		else
		{
			c.x = b.x - a.x;
			c.y = b.y - a.y;
		}
		//�P�ʃx�N�g��������
		v2 d = identifyVec(c);
		//�A�[�N�^���W�F���g�ŁAx������ǂ̂��炢��]���Ă邩�𓾂�
		//(atan2(d.y, d.x) >= 0 �̎��̓x�N�g����x���ɕ��s�`��1�ی��ɑ��݁��E�オ��
		//(atan2(d.y, d.x) < 0  �̎��̓x�N�g������4�ی��ɑ��݁��E������
		//�摜�̍��W���i���㌴�_�j�ł͉�]�p�x�̔��肪������Ƃ߂�ǂ������̂ŁA�ʏ�̃f�J���g���W�n�i�������_�j
		//�ɕϊ����Ă���A�X���i��]�p�x�j�̌v�Z���s��
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