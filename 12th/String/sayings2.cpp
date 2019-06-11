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
    cout << "输入名字: " << endl;
    cin >> name;
    String sayings[ArSize];
    char temp[MaxLen];
    int i;

    for(i = 0; i < ArSize; i++){
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);

        while(cin && cin.get() != '\n'){ //如果读取到了换行
            continue;
        }

        if(!cin || temp[0] == '\0') { //如果读取到了空字符
            break;
        }else{
            sayings[i] = temp;
        }
    }

    int total = i;

    if(total > 0){
        cout << "你说话的格言:" << endl;
        for(i = 0; i < total; i++){
            cout << sayings[i] << endl;
        }

        //使用指针记录最短的严格
        String * shortest = &sayings[0]; //格言中最短的
        String * first = &sayings[0]; //格言中字典序最小的

        for(i = 1; i < total; i++){
            if(sayings[i].length() < shortest->length()){
                shortest = &sayings[i];
            }
            if(sayings[i] < *first){
                first = &sayings[i];
            }
        }

        cout << "最短的格言: " << *shortest << endl;
        cout << "字典序最小的格言: " << * first << endl;

        srand(time(0));
        int choice = rand() & total;

        String * favorite = new String(sayings[choice]);
        cout << "最喜欢的格言: " << *favorite << endl;
        delete favorite;
    }else{
        cout << "不想说." << endl;
    }
    cout << "baibai" << endl;
    return 0;
}























