/** 
 * author: zzw5005
 * date: 2019/6/11 20:16
*/

#ifndef PRACTICE_STUDENTC_H
#define PRACTICE_STUDENTC_H


#include <valarray>
#include <string>

using namespace std;

class Student{
private:
    typedef valarray<double> ArrayDb; //这里typedef 是定义别名
    string name;
    ArrayDb scores;

    ostream & arr_out(ostream & os) const;

public:
    Student() : name("Null Student"), scores(){};

    //这里都是使用初始化列表语法来初始化成员对象，因为这里是包含对象的方式，所以使用的成员对象的名字。这一点与继承不同
    explicit Student(const string & s) : name(s), scores(){}; //explicit 禁止隐式转换，禁止从参数类型到类类型的隐式转换
    explicit Student(int n) : name("Nully"), scores(n){};

    Student(const string & s, int n) : name(s), scores(n){};
    Student(const string & s, const ArrayDb & a) : name(s), scores(a){};
    Student(const char * str, const double * pd, int n) : name(str), scores(pd, n){};

    ~Student(){};

    double Average() const;
    const string & Name() const;

    double & operator[](int i);
    double operator[](int i) const;

    friend istream & operator>>(istream & is, Student & stu);
    friend istream & getline(istream & is, Student & stu);

    friend ostream & operator<<(ostream & os, const Student & stu);
};

#endif //PRACTICE_STUDENTC_H


























