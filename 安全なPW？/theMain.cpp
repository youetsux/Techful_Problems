#include <iostream>
#include <string>
#include <regex>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::regex;

//���S��PW�H
//�ȉ��̃��[���𖞂��������ɂ���ăp�X���[�h�̋��x�����܂�܂��B
//
//�P�D8�����ȏ�ł���
//�Q�D14�����ȏ�ł���
//�R�D�����̎�ނ�2��ȏ�
//�S�D�����̎�ނ�3��ȏ�
//�T�D�����̎�ނ�4��ȏ�
//������������5�ŁuVery Strong�v�Ɣ��肳��A��������1���邲�Ƃ�
//�uStrong�v, �uGood�v, �uWeak�v, �uVery Weak�v�ƂȂ�܂��B
//�܂��A1���������Ă��Ȃ��ꍇ�́uError�v�Ɣ��肳��܂��B
//
//�Ȃ��A�p�X���[�h�Ɏg�p�ł��镶���̎�ނ͉��L��4��ނł��B
//�p�啶���@�E�E�E�@ABCDEFGHIJKLMNOPQRSTUVWXYZ
//�p�q�����@�E�E�E�@abcdefghijklmnopqrstuvwxyz
//�����@�@�@�E�E�E�@1234567890
//�L���@�@�@�E�E�E�@!? +-_.#$ % &
int main()
{
	std::regex pt1("[a-z]"), pt2("[A-Z]"), pt3("[0-9]"), pt4(R"(\W+)");
	string pwstr;
	cin >> pwstr;
	int pwstrength = 0;
	if (pwstr.length() >= 14)
		pwstrength += 2;
	else if (pwstr.length() >= 8)
		pwstrength += 1;
	int sv_count = 0;
	if (std::regex_search(pwstr.begin(), pwstr.end(), pt1))
		sv_count++;
	if (std::regex_search(pwstr.begin(), pwstr.end(), pt2))
		sv_count++;
	if (std::regex_search(pwstr.begin(), pwstr.end(), pt3))
		sv_count++;
	if (std::regex_search(pwstr.begin(), pwstr.end(), pt4))
		sv_count++;
		
	pwstrength = pwstrength + sv_count -1;
	switch (pwstrength)
	{
	case 1:
		cout << "Very Weak" << endl;
		break;
	case 2:
		cout << "Weak" << endl;
		break;
	case 3:
		cout << "Good" << endl;
		break;
	case 4:
		cout << "Strong" << endl;
		break;
	case 5:
		cout << "Very Strong" << endl;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
}