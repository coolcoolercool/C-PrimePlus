/** 
 * author: zzw5005
 * date: 2019/11/5 20:35
*/

//- getinfo.cpp 为么说明输入和输出

#include <iostream>

int main4g(){
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots += 2;

    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}