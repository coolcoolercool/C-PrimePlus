/** 
 * author: zzw5005
 * date: 2019/11/6 20:17
*/

/*
 * 说明强制转换
 */

#include <iostream>

int main6b(){
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.9 + (int) 11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for "<< ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int> (ch) << endl;

    return 0;
}

























