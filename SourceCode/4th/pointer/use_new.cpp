/** 
 * author: zzw5005
 * date: 2019/11/7 20:29
*/

/*
 * ʹ��new �ؼ���
 */

#include <iostream>
int main6v(){
    using namespace std;

    int nights = 1001;
    int* pt = new int; //- Ϊһ��int���ͱ�������ռ�
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double * pd = new double; //- Ϊһ��double��������ռ�
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






















