/** 
 * author: zzw5005
 * date: 2019/11/8 21:41
*/

/*
 * ±È½Ï×Ö·û´®
 */

#include <iostream>
#include <cstring>

int main67f(){
    using namespace std;
    string word = "?ate";
    for(char ch = 'a'; word != "mate"; ch++){
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;

    return 0;
}