/** 
 * author: zzw5005
 * date: 2019/11/8 21:57
*/

/*
 * 使用 在一个循环中使用clock()实现延迟
 */
#include <iostream>
#include <ctime>

int main76g(){
    using namespace std;
    cout << "Enter the delay time, int seconds:";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC; //- 将秒数的时间转换成系统时间的长度
    cout << "starting\a\n";
    clock_t start = clock(); //- 获取系统的当前时间

    while(clock() - start < delay){
        ;
    }
    cout << "done \a\n";

    return 0;

}

















