/** 
 * author: zzw5005
 * date: 2019/11/9 15:02
*/

/*
 * ʹ��while �� cin.get(char)��ȡ�ַ�
 */

#include <iostream>

int main87b(){
    using namespace std;

    char ch;
    int count = 0;
    cout << "Enter characters: enter # to quit:\n";
    cin.get(ch); //- ������Կո��ַ�

    while(ch != '#'){
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read" << endl;

    return 0;
}