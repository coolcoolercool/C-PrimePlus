/** 
 * author: zzw5005
 * date: 2019/6/11 21:50
*/

#ifndef CPRIMEPLUS_STUDENTI_H
#define CPRIMEPLUS_STUDENTI_H

#include <string>
#include <valarray>

using namespace std;

//˽�м̳�
class Student_1 : private string, private valarray<double>{
private:
    typedef valarray<double> ArrayDb;
    ostream & arr_out(ostream & os) const;

public:
    //���ﶼ��ʹ�ó�ʼ���б��﷨����ʼ����Ա������Ϊ������˽�м̳еķ�ʽ������ʹ�õĳ�Ա���������֡���һ���������ͬ
    Student_1() : string("Null Student"), ArrayDb(){};
    explicit Student_1(const string & s) : string(s), ArrayDb(){};
    explicit Student_1(int n) : string("Nully"), ArrayDb(n){};

    Student_1(const string & s, int n) : string(s), ArrayDb(n){};
    Student_1(const string & s, const ArrayDb & a) : string(s), ArrayDb(a){};
    Student_1(const char * str, const double * pd, int n) : string(str), ArrayDb(pd, n){};

    ~Student_1(){};

    double Average() const;
    const string & Name() const;

    double & operator[](int i);
    double operator[](int i) const;

    friend istream & operator>>(istream & is, Student_1 & stu);
    friend istream & getline(istream & is, Student_1 & stu);

    friend ostream & operator<<(ostream & os, const Student_1 & stu);
};

#endif //CPRIMEPLUS_STUDENTI_H
