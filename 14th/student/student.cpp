/** 
 * author: zzw5005
 * date: 2019/6/11 20:34
*/

#include <iostream>
#include "studentc.h"

using namespace std;

/**
 * 返回学生的平均成绩
 * @return
 */
double Student::Average() const{
    if(scores.size() > 0){
        return scores.sum() / scores.size();
    }else{
        return 0;
    }
}

/**
 * 获取学生的名字
 * @return
 */
const string & Student::Name() const{
    return name;
}

/**
 * 重写[]操作符
 * @param i
 * @return double指针
 */
double & Student::operator[](int i){
    return scores[i];
}

/**
 * 重写[]操作符
 * @param i
 * @return double对象
 */
double Student::operator[](int i) const{
    return scores[i];
}

/**
 * 打印valarray数组
 * @param os
 * @return
 */
ostream & Student::arr_out(ostream & os) const{
    int i;
    int lim = scores.size();
    if(lim > 0){
        for(i = 0; i < lim; i++){
            os << scores[i] << " ";
            if(i % 5 == 4){
                os << endl;
            }
            if(i % 5 != 0){
                os << endl;
            }
        }
    }else{
        os << " empty array ";
    }
    return os;
}

//友元函数
istream & operator>>(istream & is, Student & stu){
    is >> stu.name;
    return is;
}

istream & getline(istream & is, Student & stu){
    getline(is, stu.name);
    return is;
}

ostream & operator<<(ostream & os, const Student & stu){
    os << "Scores for" << stu.name << ":\n";
    stu.arr_out(os);
    return os;
}






















