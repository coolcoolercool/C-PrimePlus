/** 
 * author: zzw5005
 * date: 2019/5/31 16:13
*/

#include <iostream>
#include <cctype>
#include "Stack.h"

int main10(){
    using namespace std;

    Stack stack;
    char ch;
    unsigned long po;

    cout << "������һ��A�����һ�����򶩵�.\n"
         << "p���д���Qѡ���˳�" << endl;

    while(cin >> ch && toupper(ch) != 'Q'){
        while(cin.get() != '\n'){
            continue;
        }

        if(!isalpha(ch)){ //�Ƿ�����ĸ�ַ�
            cout << 'a';
            continue;
        }

        switch(ch){
            case 'A':
            case 'a':
                cout << "����һ��PO ���������:";
                cin >> po;
                if(stack.isfull()){
                    cout << "ջ����" << endl;
                }else{
                    stack.push(po);
                }
                break;

            case 'b':
            case 'p':
                if(stack.isempty()){
                    cout << "ջ��." << endl;
                }else{
                    stack.pop(po);
                    cout << "PO #" << po << " ������." << endl;
                }
                break;

        }

        cout << "��������һ��ָ��:" << endl;
    }
    cout << "�������." << endl;
    return 0;
}