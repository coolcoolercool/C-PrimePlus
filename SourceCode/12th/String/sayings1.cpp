/** 
 * author: zzw5005
 * date: 2019/5/31 20:11
*/

#include <iostream>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int mainj1(){
    using namespace std;

    String name;
    cout << "请输入你的名字: " << endl;
    cin >> name;

    cout << name << ", 请输入最多" << ArSize << "个字符的谚语:" << endl;

    String sayings[ArSize];
    char temp[MaxLen];

    int i;
    for(i = 0; i < ArSize; i++){
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while(cin && cin.get() != '\n'){
            continue;
        }
        if(!cin || temp[0] == '\0'){
            break;
        }else{
            sayings[i] = temp;
        }
    }

    int total = i;

    if(total > 0){
        cout << "这里将展示你的谚语: " << endl;
        for(i = 0; i < total; i++){
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }

        int shortest = 0;
        int first = 0;
        for(i = 1; i < total; i++){
            if(sayings[i].length() < sayings[shortest].length()){
                shortest = i;
            }

            if(sayings[i] < sayings[first]){
                first = i;
            }

            cout << "" << sayings[shortest] << endl;
            cout << "" << endl << sayings[first] << endl;
            cout << "" << String::HowMany()
                 << " String objects. Bye." << endl;
        }
    }else{
        cout << "没有输入，Bye" << endl;
    }

    return 0;
}




























