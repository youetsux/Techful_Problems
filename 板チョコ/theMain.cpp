#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//�`���R
//1�s�ڂɏc�̂��ڂ݂̐�H���^�����܂��B
//2�s�ڂɉ��̂��ڂ݂̐�W���^�����܂�

//�c��H�{���ڂ݂�����ƃ`���R��H�{�P��Ɋ��邱�Ƃ��ł���
//���l�ɉ���W�{���ڂ݂�����Ƃ��傱��W+1�s�Ɋ��邱�Ƃ��ł���
//�̂ŁB�B�B
int main()
{
	int tmp_w, tmp_h;
	cin >> tmp_w;
	cin >> tmp_h;
	cout << (tmp_w + 1) * (tmp_h + 1) << endl;
}