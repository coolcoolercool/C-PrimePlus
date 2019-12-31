/** 
 * author: zzw5005
 * date: 2019/11/9 20:06
*/

/*
 * 不是数字的输入终止循环
 */

#include <iostream>
const int Max = 5;

int main5hg7(){
    using namespace std;

    double fish[Max];
    cout << "Enter the weight of your fish.\n";
    cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
    cout << "fish #1:";

    int i = 0;
    while(i < Max && cin >> fish[i]){ //- cin>>fish，返回cin。如果cin在测试条件中，则将被转换成bool类型：如果输入成功，则转换后的值为true，否则为false
        if(++i < Max){
            cout << "fish #" << i + 1 << ":";
        }
    }

    double total = 0.0;
    for(int j  = 0; j < i; j++){
        total += fish[j];
    }

    if(i == 0){
        cout << "No fish\n";
    }else{
        cout << total / i << " = average weight of " << i << " fish\n";
    }

    cout << "Done.\n";

    return 0;
}


















