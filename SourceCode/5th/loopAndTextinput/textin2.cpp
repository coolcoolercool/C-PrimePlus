/** 
 * author: zzw5005
 * date: 2019/11/9 15:02
*/

/*
 * 使用while 和 cin.get(char)读取字符
 */

#include <iostream>

int main87b(){
    using namespace std;

    char ch;
    int count = 0;
    cout << "Enter characters: enter # to quit:\n";
    cin.get(ch); //- 不会忽略空格字符

    while(ch != '#'){
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read" << endl;

    return 0;
}