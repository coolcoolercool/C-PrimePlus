/** 
 * author: zzw5005
 * date: 2019/5/28 20:06
*/

#include <iostream>
#include "coordin.h"

using namespace std;

int main11(){
    rect rplace;
    polar pplace;

    cout << "输入x 和 y 的值:";
    while(cin >> rplace.x >> rplace.y){
        pplace = rect_to_polar_1(rplace);
        show_polar_1(pplace);
        cout << "在输入两个数字(如果想要结束程序请输入q):";
    }
    cout << "程序结束了!";

    return 0;
}