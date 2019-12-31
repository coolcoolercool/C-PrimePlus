/** 
 * author: zzw5005
 * date: 2019/6/17 19:45
*/

#include "Worker0.h"
#include <iostream>

const int LIM = 4;

int main01(){
    Waiter bob("Bob Apple", 314L, 5);
    Singer bev("Hills", 533L, 3);

    Waiter w_temp;
    Singer s_temp;

    Worker * pw[LIM] = {&bob, &bev, &w_temp, &s_temp};

    int i;
    for(i = 2; i < LIM; i++){
        pw[i] -> Set();
    }

    for(i = 0; i < LIM; i++){
        pw[i] -> Show();
        std::cout << std::endl;
    }

    return 0;
};