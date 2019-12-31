/** 
 * author: zzw5005
 * date: 2019/11/11 17:05
*/

/*
 * 有两个参数的函数
 */

#include <iostream>

using namespace std;

void n_chars(char a, int b);

int main9kj0(){
    int times;
    char ch;

    cout << "Enter a character:";
    cin >> ch;

    while(ch != 'q'){
        cout << "Enter a integer:";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another character or press the q-key to quit";

        cin >> ch;
    }

    cout << "The value of time is " << times << ".\n";
    cout << "Bye\n";

    return 0;
}

void n_chars(char c, int n){
    while(n-- > 0){
        cout << c;
    }
}



















