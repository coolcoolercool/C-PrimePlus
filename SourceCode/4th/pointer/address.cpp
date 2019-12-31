/** 
 * author: zzw5005
 * date: 2019/11/7 20:02
*/

/*
 * 使用 & 找到 变量的地址
 */

#include <iostream>

int main0m(){
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    return 0;
}














