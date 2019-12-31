/** 
 * author: zzw5005
 * date: 2019/11/6 21:08
*/

/*
 * 使用getline读取两个以及以上的单词
 */

#include <iostream>

int main2j(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize); //- 读取一行
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}







