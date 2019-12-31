/** 
 * author: zzw5005
 * date: 2019/11/7 11:15
*/

/*
 * strcpy 和 strcat 函数的使用
 */

#include <iostream>
#include <string>
#include <cstring>

int main4b(){
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2); //- 将字符数组charr复制给charr1

    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();  // size() 和 strlen()都是返回字符串包含的字符数
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";

    return 0;
}














