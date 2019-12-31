/** 
 * author: zzw5005
 * date: 2019/11/9 15:40
*/

/*
 * 使用 cin.get() 读取字符
 */
#include <iostream>

int main06h(void){
    using namespace std;
    int ch; //- 注意这里是int类型，为了与EOF表示的-1，进行比较
    int count = 0;

    while((ch = cin.get()) != EOF){
        cout.put(char(ch)); //- 强制转换
        ++count;
    }

    cout << endl << count << " characters read\n";

    return 0;
}