#include <iostream>


using namespace std;


int main()
{
	string s;
	getline(cin, s);//getlineは文字列を格納できる訳だ

    //cout<< "s になに : " << s << endl;
    cout << endl;

	for (int i = 0; i < s.size(); ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			cout << char(toupper(s[i]));
		}
		else if ('A' <= s[i] && s[i] <= 'Z')
		{
			cout << char(tolower(s[i]));
		}
		else
		{
			cout << s[i];
		}
	}
	cout << endl;
}