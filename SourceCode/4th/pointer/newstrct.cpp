/** 
 * author: zzw5005
 * date: 2019/11/8 15:41
*/

/*
 * ʹ�� new ���� ָ��ṹ��ָ��
 */


#include <iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main7i(){
    using namespace std;
    inflatable* ps = new inflatable;
    cout << "Enter name of inflatable item:";
    cin.get(ps -> name, 20);
    cout << "Enter volume in cubic feet:";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;

    delete ps;
    return 0;
}




















