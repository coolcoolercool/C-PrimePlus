/** 
 * author: zzw5005
 * date: 2019/11/9 15:28
*/

/*
 * ����ַ������ĩβ
 */
#include <iostream>

int main03l(){
    using namespace std;

    char ch;
    int count = 0;
    cout << "Enter characters: enter # to quit:\n";
    cin.get(ch); //- ������Կո��ַ�

    while(cin.fail() == false){ //- fail()�������Լ����ļ�ĩβ��EOF
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read" << endl;

    return 0;
}