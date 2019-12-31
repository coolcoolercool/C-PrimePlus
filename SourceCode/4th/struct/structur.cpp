/** 
 * author: zzw5005
 * date: 2019/11/7 15:09
*/

/*
 * 一个简单结构
 */

#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main4c(){
    using namespace std;
    inflatable guest = {
            "Glorious Gloria",
            1.88,
            29.99
    };

    inflatable pal = {
            "Audacious Arthur",
            3.12,
            32.99
    };

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";

    return 0;
}











