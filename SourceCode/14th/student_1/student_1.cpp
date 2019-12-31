/** 
 * author: zzw5005
 * date: 2019/6/17 17:05
*/

#include <iostream>
#include "studenti.h"
using namespace std;

double Student_1::Average() const{
    if(ArrayDb::size() > 0){
        return ArrayDb::sum() / ArrayDb::size();
    }else{
        return 0;
    }
}


const string & Student_1::Name() const{
    return (const string & ) *this;  //强制转换,为了获取基类对象本省
}

double & Student_1::operator[](int i){
    return ArrayDb::operator[](i);  //调用了父类的方法
}

/**
 * 与上面的函数的区别，就是不可以对传入的参数进行修改
 * @param i
 * @return
 */
double Student_1::operator[](int i) const{
    return ArrayDb::operator[](i);
}


//私有方法

ostream & Student_1::arr_out(ostream & os) const{
    int i;
    int lim = ArrayDb::size();
    if(lim > 0){
        for(i = 0; i < lim; i++){
            os << ArrayDb::operator[](i) << " ";
            if(i % 5 == 4){
                os << endl;
            }
        }

        if(i % 5 != 0){
            os << endl;
        }
    }else{
        os << " empty array ";
    }

    return os;
}



//友元函数

istream & operator>>(istream & is, Student_1 & stu){
    is >> (string &) stu;
    return is;
}

istream & getline(istream & is, Student_1 & stu){
    getline(is, (string &) stu);
    return is;
}

ostream & operator<<(ostream & os, const Student_1 & stu){
    os << "Score for " << (const string &) stu << ":\n";
    stu.arr_out(os);
    return os;
}






