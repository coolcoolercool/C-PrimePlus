/** 
 * author: zzw5005
 * date: 2019/11/9 14:54
*/

/*
 * ʹ��while ѭ�� �� cin ��ȡ�ַ�
 */

#include <iostream>

int main55n(){
    using namespace std;

    char ch;
    int count = 0;
    cout << "Enter characters: enter # to quit:\n";
    cin >> ch;

    while(ch != '#'){
        cout << ch;
        ++count;
        cin >> ch;
    }

    cout << endl << count << " characters read" << endl;

    return 0;
}

















