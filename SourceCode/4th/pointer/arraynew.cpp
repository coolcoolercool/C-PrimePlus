/** 
 * author: zzw5005
 * date: 2019/11/7 21:27
*/

/*
 * ʹ��ָ���������
 */

#include <iostream>
int main9n(){
    using namespace std;
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1; //- ͨ��ָ�����ӣ����ı�ָ��ָ��������е�Ԫ��

    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;

    delete[] p3; //- �ͷ�������ڴ�


    return 0;
}














