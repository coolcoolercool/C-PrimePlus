/** 
 * author: zzw5005
 * date: 2019/6/3 17:18
*/

#ifndef PRACTICE_TABLENN1_H
#define PRACTICE_TABLENN1_H
#include <string>

using namespace std;

//基类
class TableTennisPlayer{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string & fn = "none",
            const string & ln = "none", bool ht = false);

    void Name() const;
    bool HasTable() const{
        return hasTable;
    }

    void ResetTable(bool v){
        hasTable = v;
    }
};

//派生类
class RatedPlayer : public TableTennisPlayer{
private:
    unsigned int rating;

public:
    RatedPlayer(unsigned int r = 0, const string & fn = "none",
            const string & ln = "none", bool ht = false);

    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() const{
        return rating;
    }

    void ResetRating(unsigned int r){
        rating = r;
    }
};


#endif //PRACTICE_TABLENN1_H
