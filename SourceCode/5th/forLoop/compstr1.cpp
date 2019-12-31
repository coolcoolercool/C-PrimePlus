/** 
 * author: zzw5005
 * date: 2019/11/8 21:34
*/

/*
 * 比较字符数组
 */

#include <iostream>
#include <cstring>

int main00o(){
    using namespace std;
    char word[5] = "?ate";
    for(char ch = 'a'; strcmp(word, "mate"); ch++){
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;

    return 0;
}















