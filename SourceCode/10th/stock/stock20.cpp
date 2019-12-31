/** 
 * author: zzw5005
 * date: 2019/5/31 15:22
*/

#include <iostream>
#include "stock20.h"

Stock::Stock(){
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock:: Stock(const string & co, long n, double pr){
    company = co;

    if(n < 0){
        cout << "持有股票数不能为负数; " << company << endl;

        shares = 0;
    }else{
        shares = n;
    }

    share_val = pr;
    set_total();
}

Stock::~Stock(){

}

void Stock::buy(long num, double price){
    if(num < 0){
        cout << "股票的价格必须大于0." << " 交易失败." << endl;
    }else{
        shares += num;
        share_val = price;
        set_total();
    }
}


void Stock::sell(long num, double price){
    if(num < 0){
        cout << "卖出股票数量必须大于0. "
             << "交易失败.";
    }else if(num > shares){
        cout << "你出售的股票数量不能大于你持有的数量."
             << "交易失败.";
    }else{
        shares -= num;
        share_val = price;
        set_total();
    }
}

void Stock::update(double price){
    share_val = price;
    set_total();
}

void Stock::show() const{
    ios_base::fmtflags orig =
            cout.setf(ios_base::fixed, ios_base::floatfield);

    streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << endl;
    cout << " Shares Price : $" << share_val;

    cout.precision(3); //显示三位小数
    cout << " Total Worth  : $" << total_val << endl;

    //将堆cout的修改，恢复
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

/**
 * 返回两个股票中总价值较大的股票
 * @param s
 * @return
 */
const Stock & Stock::topval(const Stock & s) const{
    if(s.total_val > total_val){
        return s;
    }else{
        return * this;
    }
}


















