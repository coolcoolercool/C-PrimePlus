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

    cout << "����x �� y ��ֵ:";
    while(cin >> rplace.x >> rplace.y){
        pplace = rect_to_polar_1(rplace);
        show_polar_1(pplace);
        cout << "��������������(�����Ҫ��������������q):";
    }
    cout << "���������!";

    return 0;
}