#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    string str = "パタトクカシーー";
    string ret;

    int count = 0;  //文字数カウント

    cout << str << endl;
    for(int i = 0; count < 8; i++)
    { 
        if(str.empty()) break;
        cout << "empty check" << endl;
        char c = str[0];

        if(IsDBCSLeadByte(c) == 0){
            if(count % 2 == 0)
            {
                ret.insert(ret.size(), str.substr(0,1));
                str.erase(0, 1);
                
            }else{
                str.erase(0, 1);
            }
        }else{
            if(count % 2 == 0)
            {
                ret.insert(ret.size(), str.substr(0,2));
                str.erase(0,2);
            }else{
                str.erase(0,2);
            }
        }

        cout << count << ": " << ret << ": " << str << endl;
        count++;

        if(count > 7) break;
    }

    cout << "end :" << count << " :" << ret << endl;

    getline(cin, str);
    return 0;
}