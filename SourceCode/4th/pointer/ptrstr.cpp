/** 
 * author: zzw5005
 * date: 2019/11/8 15:09
*/

/*
 * 使用指向字符串的指针
 */

#include <iostream>
#include <cstring>

int main0a(){
    using namespace std;

    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps;

    cout << animal << " and ";
    cout << bird << "\n";

    //cout << ps << "\n"; //- 因为ps没有初始化，所以这里打印可能会出问题

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int*) animal << endl; //- 这里为打印的是anima字符数组的地址，所以使用(int*)将原本的animal代表的(char*),进行了强制转换，所以显示的字符数组的地址
    cout << ps << " at " << (int*) ps << endl;

    delete[] ps;

    return 0;
}











