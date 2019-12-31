/** 
 * author: zzw5005
 * date: 2019/6/3 10:43
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "string1.h"


const int ArSize = 10;
const int MaxLen = 81;

int main_2j(){
    using namespace std;

    String name;
    cout << "��������: " << endl;
    cin >> name;
    String sayings[ArSize];
    char temp[MaxLen];
    int i;

    for(i = 0; i < ArSize; i++){
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);

        while(cin && cin.get() != '\n'){ //�����ȡ���˻���
            continue;
        }

        if(!cin || temp[0] == '\0') { //�����ȡ���˿��ַ�
            break;
        }else{
            sayings[i] = temp;
        }
    }

    int total = i;

    if(total > 0){
        cout << "��˵���ĸ���:" << endl;
        for(i = 0; i < total; i++){
            cout << sayings[i] << endl;
        }

        //ʹ��ָ���¼��̵��ϸ�
        String * shortest = &sayings[0]; //��������̵�
        String * first = &sayings[0]; //�������ֵ�����С��

        for(i = 1; i < total; i++){
            if(sayings[i].length() < shortest->length()){
                shortest = &sayings[i];
            }
            if(sayings[i] < *first){
                first = &sayings[i];
            }
        }

        cout << "��̵ĸ���: " << *shortest << endl;
        cout << "�ֵ�����С�ĸ���: " << * first << endl;

        srand(time(0));
        int choice = rand() & total;

        String * favorite = new String(sayings[choice]);
        cout << "��ϲ���ĸ���: " << *favorite << endl;
        delete favorite;
    }else{
        cout << "����˵." << endl;
    }
    cout << "baibai" << endl;
    return 0;
}























