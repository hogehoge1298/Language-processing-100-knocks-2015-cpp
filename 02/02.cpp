#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "�p�g�J�[";
    string str2 = "�^�N�V�[";

    cout << "str1size: " << str1.size() << " str2size: " << str2.size() << endl;
    string ret = "";
    int count = 0;
    while(true)
    {
        //������Ȃ烋�[�v�𔲂���
        if(str1.empty() && str2.empty()) break;

        //�����Ȃ�str1����
        if(count % 2 == 0)
        {
            //Null�`�F�b�N
            if(str1.empty())
            {
                count++;
                continue;
            }
            ret.insert(ret.size(), str1.substr(0,2));
            str1.erase(0, 2);
        }
        //��Ȃ�str2����
        else
        {
            //NULL�`�F�b�N
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