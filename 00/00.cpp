#include <iostream>
#include <string>
using namespace std;

//00.文字列の逆順
//文字列"stressed"の文字を逆に並べた文字列を得よ
int main()
{
    string str = "stressed";
    string ret = "";

    cout << str << endl;
    for(int i = str.size() - 1; i >= 0; i--)
    {
        ret.push_back(str[i]);
    }

    cout << ret << endl;

    getline(cin, str);

    return 0;
}