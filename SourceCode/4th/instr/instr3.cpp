/** 
 * author: zzw5005
 * date: 2019/11/6 21:16
*/

/*
 * ʹ��get��ȡ�����Լ����ϵĵ���
 */

#include <iostream>

int main1l(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize); //- ��ȡһ��
    cin.get();  //- ��ȡ���ڶ����еĻ��з�
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}