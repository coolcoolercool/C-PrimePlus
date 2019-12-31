/** 
 * author: zzw5005
 * date: 2019/11/8 20:51
*/

/*
 * 使用for循环访问string
 */

#include <iostream>
#include <string>

int main4v(){
    using namespace std;
    cout << "Enter a word:";
    string word;
    cin >> word;

    for(int i = word.size() - 1; i >= 0; i--){
        cout << word[i];
    }

    cout << "\nBye.\n";

    return 0;
}













