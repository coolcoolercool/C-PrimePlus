/** 
 * author: zzw5005
 * date: 2019/5/31 16:13
*/

#include <iostream>
#include <cctype>
#include "stack.h"

int main10(){
    using namespace std;

    Stack stack;
    char ch;
    unsigned long po;

    cout << "请输入一个A来添加一个购买订单.\n"
         << "p进行处理，Q选择退出" << endl;

    while(cin >> ch && toupper(ch) != 'Q'){
        while(cin.get() != '\n'){
            continue;
        }

        if(!isalpha(ch)){ //是否是字母字符
            cout << 'a';
            continue;
        }

        switch(ch){
            case 'A':
            case 'a':
                cout << "输入一个PO 数字来添加:";
                cin >> po;
                if(stack.isfull()){
                    cout << "栈满了" << endl;
                }else{
                    stack.push(po);
                }
                break;

            case 'b':
            case 'p':
                if(stack.isempty()){
                    cout << "栈空." << endl;
                }else{
                    stack.pop(po);
                    cout << "PO #" << po << " 弹出了." << endl;
                }
                break;

        }

        cout << "请输入下一个指令:" << endl;
    }
    cout << "程序结束." << endl;
    return 0;
}