/** 
 * author: zzw5005
 * date: 2019/5/31 19:38
*/

#ifndef PRACTICE_STRING1_H
#define PRACTICE_STRING1_H

#include <iostream>

using namespace std;

class String {
private:
    char * str;                    //指向字符串的指针
    int len;                       //字符串的长度
    static int num_strings;        //对象的数目
    static const int CINLIM = 80;  //cin函数的接收字符上限

public:
    //构造器
    String(const char * s);
    String();
    String(const String &);
    //析构函数
    ~String();

    int length() const{
        return len;
    };

    //重载操作符的方法
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;

    //重载操作符的友元方法
    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);

    //static方法
    static int HowMany();
};


#endif //PRACTICE_STRING1_H
