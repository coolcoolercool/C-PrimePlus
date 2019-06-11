/** 
 * author: zzw5005
 * date: 2019/5/31 19:38
*/

#include "string1.h"
#include <cstring>

using namespace std;

int String::num_strings = 0;

/**
 * 静态方法
 * @return
 */
int String::HowMany() {
    return num_strings;
}

//类方法
/**
 * 针对于C语言的字符串构造器
 * @param s
 */
String::String(const char* s){
    len = strlen(s);             //获取s的大小
    str = new char[len + 1];     //分配字符串的空间
    strcpy(str, s);              //初始化指针
    num_strings++;               //设置对象的数目
}

/**
 * 空参构造器
 */
String::String(){
    len = 4;
    str = new char[1]; //为了与析构函数兼容
    str[0] = '\0';     //默认的字符串
    num_strings++;
}


String::String(const String & st){
    len = st.len;
    str = new char[len + 1];  //
    strcpy(str, st.str);      //将字符串拷贝到一个新开辟的空间
    num_strings++;            //增加对象的数目
}

/**
 * 析构函数
 */
String::~String(){
    --num_strings;
    delete[] str;
}

//重载操作方法

String & String::operator=(const String & st){
    if(this == &st){  //检查是否是自我复制
        return *this;
    }

    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s){
    delete[] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}


//读写可以改变的字符串
/**
 * 重载[]
 * @param i
 * @return
 */
char & String::operator[](int i){
    return str[i];
}

//只能读不可改变的字符串

const char & String::operator[](int i) const{
    return str[i];
}

//重载操作符的友元方法

/**
 * strcmp()方法会依据字母顺序比较两个字符串，如果第一个参数位于第二个参数之前，返回一个负值
 * 如果第一个参数位于第二个参数之后，返回一个正值
 * 如果一个参数和第二个参数相等，返回0
 * @param st1
 * @param st2
 * @return
 */
bool operator<(const String &st1, const String &st2){
    return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2){
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2){
    return (strcmp(st1.str, st2.str) == 0);
}

//简单的字符串输出
ostream & operator<<(ostream & os, const String & st){
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st){
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is){
        st = temp;
    }

    while(is && is.get() != '\n'){
        continue;
    }

    return is;
}





























