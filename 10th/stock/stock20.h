/** 
 * author: zzw5005
 * date: 2019/5/31 15:22
*/

#ifndef PRACTICE_STOCK20_H
#define PRACTICE_STOCK20_H
#include <string>

using namespace std;

class Stock {
private:
    string company; //股票的公司名
    long shares;   //持有的股票树
    double share_val;  //股票单价
    double total_val;  //持有的股票总价

    void set_total(){
        total_val = shares * share_val;
    }

public:
    //两个构造器
    Stock();
    Stock(const string &company, long n = 0, double pt = 0.0);

    //析构函数
    ~Stock();

    void acquire(const string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};


#endif //PRACTICE_STOCK20_H
