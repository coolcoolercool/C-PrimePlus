/** 
 * author: zzw5005
 * date: 2019/5/28 20:10
*/

#include <iostream>
#include <cmath>
#include "coordin.h"

using namespace std;

polar rect_to_polar_1(rect xypos){
    polar answer;

    answer.distance =
            sqrt(xypos.x * xypos.x + xypos.y * xypos.y);

    answer.angle = atan2(xypos.y, xypos.x);

    return answer;
}

void show_polar_1(polar dapos){
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}