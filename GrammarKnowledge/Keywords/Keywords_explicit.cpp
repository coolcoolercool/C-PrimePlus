/** 
 * author: zzw5005
 * date: 2020/1/2 11:24
*/


/**
 * explicit(显式)关键字
 * 1、explicit修饰构造函数时，可以防止隐式转换和复制初始化
 * 2、explicit修饰转换函数时，可以防止隐式转换，但是 按语境转换 除外
 */


/*
 * explicit
 */

struct A_struct{
    A_struct(int i){}

    operator bool() const{
        return true;
    };
};

struct B_struct{
    explicit B_struct(int) {};
    explicit operator bool() const{
        return true;
    }
};

void doA_struct(A_struct a){
}

void doB_struct(B_struct b){
}

int main6bl7(){
    A_struct a1(1);                     //- 直接初始化
    A_struct a2 = 1;                    //- 复制初始化
    A_struct a3{ 1 };                   //- 直接列表初始化
    A_struct a4 = (A_struct) 1;         //- 允许static_cast显式转换
    doA_struct(1);                      //- 允许从int 到A_struct的隐式转换

    if(a1);                             //- 使用转换函数A_struct::operator bool()的从A_struct到bool的隐式转换

    bool a6(a1);                        //- 使用转换函数A_struct::operator bool()的从A_struct到bool的隐式转换
    bool a7 = a1;                       //- 使用转换函数A_struct::operator bool()的从A_struct到bool的隐式转换
    bool a8 = static_cast<bool>(a1);    //- static_cast进行直接初始化


    B_struct b1(1);                     //- 直接初始化
    //B_struct b2 = 1;                  //- 错误，被explicit修饰构造函数的对象不可以复制初始化
    B_struct b3{ 1 };;                  //- 直接列表初始化
    //B_struct b4 = { 1 };              //- 错误，被explicit修饰的构造函数对象不可以列表初始化
    B_struct b5 = (B_struct) 1;         //- 允许 static_cast显式初始化

    //doB_struct(1);                    //- 错误，被explicit修饰构造函数的对象不可以从int到B_struct的隐式转换
    if(b1);                             //- 被explicit修饰转换函数 B_struct::operator bool()的对象可以从B_struct 到 bool的按语境转换
    bool b6(b1);                        //- 被explicit修饰转换函数 B_struct::operator bool()的对象可以从B_struct 到 bool的按语境转换
    //bool b7 = b1;                     //- 被explicit修饰转换函数， B_struct::operator bool()的对象不可以隐式转换
    bool b8 = static_cast<bool> (b1);   //- static_cast进行直接初始化

    return 0;
}