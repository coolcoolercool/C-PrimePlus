/** 
 * author: zzw5005
 * date: 2019/6/3 20:37
*/


#include <iostream>
#include "brass.h"

using namespace std;

typedef ios_base::fmtflags format;
typedef streamsize precis;
format setFormat();

//函数声明，原型
void restore(format f, precis p);


Brass::Brass(const string & s, long an, double bal){
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt){
    if(amt < 0){
        cout << "不可以为负数." << endl;
    }else{
        balance += amt;
    }
}


void Brass::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if(amt < 0){
        cout << "必须是正数." << endl;
    }else if(amt <= balance){
        balance -= amt;
    }else{
        cout << "amt = " << amt;
    }
    restore(initialState, prec);
}

double Brass::Balance() const{
    return balance;
}

void Brass::ViewAcct() const{
    format initialState = setFormat();
    precis prec = cout.precision(2);

    cout << "Client 的名字: " << fullName << endl;
    cout << "账户 : " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);
}



//子类的方法
BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r)
                    : Brass(s, an, bal){
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r)
                    : Brass(ba){
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

//重新定义的方法
void BrassPlus::ViewAcct() const{
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct();

    cout << "MaxLoan: " << maxLoan << endl;
    cout << "Owe: " << owesBank << endl;

    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << endl;
    restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();
    if(amt <= bal){
        Brass::Withdraw(amt);
    }else if(amt <= bal + maxLoan - owesBank){
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank Advace:" << advance << endl;
        cout << "Finace charge: " << advance * rate << endl;

        Deposit(advance);
        Brass::Withdraw(amt);
    }else{
        cout << "Credit limit exceeded. Tranaction cancelled.\n";
    }

    restore(initialState, prec);
}

format setFormat(){
    return cout.setf(ios_base::fixed, ios_base::floatfield);
}

void restore(format f, precis p){
    cout.setf(f, ios_base::floatfield);
    cout.precision(p);
}

























