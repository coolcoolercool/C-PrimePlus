/** 
 * author: zzw5005
 * date: 2019/11/6 21:08
*/

/*
 * ʹ��getline��ȡ�����Լ����ϵĵ���
 */

#include <iostream>

int main2j(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize); //- ��ȡһ��
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}







