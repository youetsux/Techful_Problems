#include <iostream>
#include <string>
#include <regex>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::regex;

//安全なPW？
//以下のルールを満たした数によってパスワードの強度が決まります。
//
//１．8文字以上である
//２．14文字以上である
//３．文字の種類が2種以上
//４．文字の種類が3種以上
//５．文字の種類が4種以上
//満たした数が5つで「Very Strong」と判定され、そこから1つ減るごとに
//「Strong」, 「Good」, 「Weak」, 「Very Weak」となります。
//また、1つも満たしていない場合は「Error」と判定されます。
//
//なお、パスワードに使用できる文字の種類は下記の4種類です。
//英大文字　・・・　ABCDEFGHIJKLMNOPQRSTUVWXYZ
//英子文字　・・・　abcdefghijklmnopqrstuvwxyz
//数字　　　・・・　1234567890
//記号　　　・・・　!? +-_.#$ % &
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