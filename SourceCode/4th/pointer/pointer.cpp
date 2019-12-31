/** 
 * author: zzw5005
 * date: 2019/11/7 20:10
*/

/*
 * 第一个指针变量
 */

#include <iostream>
int main1q(){
    using namespace std;

    int updates = 6;
    int * p_updates;
    p_updates = &updates;

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}











