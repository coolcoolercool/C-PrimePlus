/** 
 * author: zzw5005
 * date: 2020/5/24 11:22
*/

#include <iostream>
#include "tv.h"

int main(){
    using std::cout;

    Tv s42;

    cout << "Initial settings for 42\" Tv:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();

    cout << "\nAdjusted settings for 42\" Tv:\n";
    s42.settings();

    Remote grey;

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\ns42\" settings after using remote:\n";

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "\ns58\" settings:\n";
    s58.settings();

    return 0;


}