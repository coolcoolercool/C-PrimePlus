/** 
 * author: zzw5005
 * date: 2019/6/3 17:25
*/

#include "tablenn1.h"
#include <iostream>

using namespace std;

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht)
                :firstname(fn), lastname(ln), hasTable(ht) {};

void TableTennisPlayer::Name() const{
    cout << lastname << ", " << firstname;
}


RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp) {}