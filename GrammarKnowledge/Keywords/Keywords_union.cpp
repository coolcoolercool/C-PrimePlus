/** 
 * author: zzw5005
 * date: 2020/1/2 11:01
*/

/**
 * union 联合
 * 联合（union）是一种节约空间的特殊的类，一个union可以有多个数据成员，但是在任意时刻只有一个数据成员可以有值。
 * 当某个成员被赋值后其他成语言变为未定义状态。
 * 联合的特点如下：
 * 1、默认访问控制符为public
 * 2、可以含有构造函数、析构函数
 * 3、不能含有引用类型的成员
 * 4、不能含有继承自其他类，不能作为基类
 * 5、不能含有虚函数
 * 6、匿名union在定义所在作用域可直接访问union成员
 * 7、匿名union不能包含protected成员或private成员
 * 8、全局匿名联合必须是静态的(static)
 */


/*
 * union使用
 */

#include <iostream>

union UnionTest{
    UnionTest() : i(10){};
    int i;
    double d;
};

static union{ //- 全局匿名联合
    int i;
    double d;
};

int main7jh6(){
    UnionTest u;

    union{   //-  局部匿名联合
        int i;
        double d;
    };

    std::cout << u.i << std::endl;  //- 输出 UnionTest 联合的 10

    ::i = 20;
    std::cout << ::i << std::endl; //- 输出全局静态匿名联合的 20

    i = 30;
    std::cout << i << std::endl; //- 输出局部匿名联合的 30

    return 0;
}