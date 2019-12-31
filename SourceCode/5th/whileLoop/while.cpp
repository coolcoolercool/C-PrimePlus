/** 
 * author: zzw5005
 * date: 2019/11/8 21:48
*/

/*
 * ΩÈ…‹while —≠ª∑
 */

#include <iostream>

const int ArSize = 20;
int main12l(){
    using namespace std;
    char name[ArSize];

    cout << "Enter your first name, please:";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;

    while(name[i] != '\0'){
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }

    return 0;
}
















