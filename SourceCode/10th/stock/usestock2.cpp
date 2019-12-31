/** 
 * author: zzw5005
 * date: 2019/5/31 15:35
*/

#include <iostream>
#include "stock20.h"



const int SIZE = 4;
int main2(){
    using namespace std;

    //创建Stock对象数组
    Stock stocks[SIZE] = {
            Stock("catSmart", 12, 20.0),
            Stock("dogSmart", 200, 2.0),
            Stock("pigSmart", 130, 3.25),
            Stock("SheepSmart",60, 6.5)
    };

    cout << "持有的股票: " << endl;
    int st;
    for(st = 0; st < SIZE; st++){
        stocks[st].show();
    }

    const Stock * top = &stocks[0];

    for(st = 1; st < SIZE; st++){
        top = &top->topval(stocks[st]);
    }

    cout << "\n持有股票总价值最高的是:" << endl;
    top->show();
    return 0;
}