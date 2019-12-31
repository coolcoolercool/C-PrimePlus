/** 
 * author: zzw5005
 * date: 2019/11/7 20:29
*/

/*
 * 使用new 关键字
 */

#include <iostream>
int main6v(){
    using namespace std;

    int nights = 1001;
    int* pt = new int; //- 为一个int类型变量分配空间
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double * pd = new double; //- 为一个double变量分配空间
    *pd = 10000001.0;

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;


    return 0;
}






















