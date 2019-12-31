/** 
 * author: zzw5005
 * date: 2019/11/9 15:28
*/

/*
 * 检测字符输入的末尾
 */
#include <iostream>

int main03l(){
    using namespace std;

    char ch;
    int count = 0;
    cout << "Enter characters: enter # to quit:\n";
    cin.get(ch); //- 不会忽略空格字符

    while(cin.fail() == false){ //- fail()函数可以检查出文件末尾的EOF
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read" << endl;

    return 0;
}