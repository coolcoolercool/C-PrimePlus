/** 
 * author: zzw5005
 * date: 2019/11/8 15:51
*/

/*
 * 使用 delete操作
 */

#include <iostream>
#include <cstring>

using namespace std;
char* getname(void); //- 函数原型

int main5v(){
    char* name;

    name = getname();
    cout << name << " at " << (int*) name << "\n";
    delete[] name;

    name = getname();
    cout << name << " at " << (int*) name << "\n";
    delete[] name;

    return 0;
}

char* getname(){
    char temp[80] ;
    cout << "Enter last name:";
    cin >> temp;
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn; //- 这里返回的是局部变量
}













