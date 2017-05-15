#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "パトカー";
    string str2 = "タクシー";

    cout << "str1size: " << str1.size() << " str2size: " << str2.size() << endl;
    string ret = "";
    int count = 0;
    while(true)
    {
        //両方空ならループを抜ける
        if(str1.empty() && str2.empty()) break;

        //偶数ならstr1から
        if(count % 2 == 0)
        {
            //Nullチェック
            if(str1.empty())
            {
                count++;
                continue;
            }
            ret.insert(ret.size(), str1.substr(0,2));
            str1.erase(0, 2);
        }
        //奇数ならstr2から
        else
        {
            //NULLチェック
            if(str2.empty())
            {
                count++;
                continue;
            }
            ret.insert(ret.size(), str2.substr(0,2));
            str2.erase(0, 2);
            
        }

        cout << count << " : " << str1.size() << " " << str2.size() << endl;
        count++;        
    }

    cout << ret << endl;
    getline(cin, ret);
    return 0;
}