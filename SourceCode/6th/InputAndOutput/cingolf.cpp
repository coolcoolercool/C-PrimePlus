/** 
 * author: zzw5005
 * date: 2019/11/9 20:17
*/

/*
 * ���������ֵ�����
 */

#include <iostream>
const int Max = 5;

int main9jh7(){
    using namespace std;
    int golf[Max];
    cout << "Enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds." << endl;

    int i;
    for(i = 0; i < Max; i++){
        cout << "round #" << i + 1 << ":";
        while(!(cin >> golf[i])){
            cin.clear(); //- ��������

            while(cin.get() != '\n'){
                continue; //- ɾ�����������
            }

            cout << "Enter a number:";
        }
    }

    double total = 0.0;
    for(i = 0; i < Max; i++){
        total += golf[i];
    }

    cout << total / Max << " = averge score " << Max << " rounds\n";

    return 0;
}


















