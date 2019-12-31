/** 
 * author: zzw5005
 * date: 2019/11/9 16:03
*/

/*
 *  π”√if”Ôæ‰
 */

#include <iostream>
int main92m(){
    using std::cin;
    using std::cout;

    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);

    while(ch != '.'){
        if(ch == ' '){
            ++spaces;
        }

        ++total;
        cin.get(ch);
    }

    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";

    return 0;
}













