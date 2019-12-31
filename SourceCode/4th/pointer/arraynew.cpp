/** 
 * author: zzw5005
 * date: 2019/11/7 21:27
*/

/*
 * 使用指针操作数组
 */

#include <iostream>
int main9n(){
    using namespace std;
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1; //- 通过指针增加，来改变指针指向的数组中的元素

    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;

    delete[] p3; //- 释放数组的内存


    return 0;
}














