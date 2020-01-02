/** 
 * author: zzw5005
 * date: 2019/12/31 16:33
*/

/**
 * 虚函数(virtual)可以是内联函数吗?
 * 1、虚函数可以是内联函数，内联是可以修饰虚函数的，但是当虚函数表现多态性的时候不能内联
 * 2、内联是建议编译器内联，而虚函数的多态性在运行期，编译器无法知道运行期调用哪个代码，因此虚函数表现为多态性时，不可以内联
 * 3、inline virtual 唯一可以内联的时候：编译器知道所调用的对象是哪个类（如Base::who()），这只是在编译器具有实际对象而不是对象指针或引用时才发生。
 */

/*
 * 虚函数内联使用
 */

#include <iostream>
using namespace std;

class Base_virtual{
public:
    inline virtual void who(){
        cout << "I'm Base_virtual\n";
    }

    virtual ~Base_virtual(){};
};

class Derived : public Base_virtual{
public:
    inline void who(){   //- 不写inline时，隐式内联
        cout << "I'm Derived\n";
    }
};

int main9kj2(){
    //- 此处的虚函数 who()，是通过类（Base）的具体对象（b）来调用的，编译期间就能确定，所以它可以是内联的，但是
    // 最终是否内联取决于编译器
    Base_virtual b;
    b.who();

    //- 此处的虚函数是通过指针调用的，呈现多态性，需要在运行期间才能确定，所以不能为内联
    Base_virtual *ptr = new Derived();
    ptr->who();

    //- 因为Base有虚析构函数（virtual ~Base(){}），所以delete时，会先调用派生类（Derived）析构函数，再调用基类（Base）析构函数，防止内存泄漏
    delete ptr;
    ptr = nullptr;

    system("pause");
    return 0;
}
