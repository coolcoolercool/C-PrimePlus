/** 
 * author: zzw5005
 * date: 2019/12/31 14:46
*/

/**
 * const
 * 作用：
 * 1、修饰变量，说明该变量不可以被改变；
 * 2、修饰指针，分为指向常量的指针和指针常量
 * 3、常量引用，警用用于形参类型，即避免了拷贝，又避免了函数对值得修改
 * 4、修饰成员函数，说明该成员函数步修改成员变量
 */

class const_class{
private:
    const int a;  //常对象成员，只能在初始化列表赋值

public:
    //构造函数
    const_class() : a(0) {};  //默认值
    const_class(int x) : a(x) {}; //这里对长对象成员，进行初始化列表赋值

    //const 可以用作区分 重载函数 的标志
    int getValue();          //- 普通成员函数
    int getValue() const;    //- 常成员函数，不得修改类中的任何数据成员的值
};

void function(){
    //对象
    const_class b;              //- 普通对象，可以调用全部成员函数，更新成员常量
    const const_class a;        //- 常对象，只能调用成员函数
    const const_class *p = &a;  //- 常指针
    const const_class &q = a;   //- 常引用

    //指针
    char greeting[] = "Hello";
    char *p1 = greeting;               //- 指针变量，指向字符数组变量
    const char* p2 = greeting;         //- 指针变量，指向字符数组常量
    char* const p3 = greeting;         //- 常指针，指向字符数组变量
    const char* const p4 = greeting;   //- 常指针，指向字符数组常量
}

//- 函数
void function1(const int var);   //- 传递过来的参数在函数内不可改变
void function2(const char* var); //- 参数指针所指内容为常量
void function3(char* const var); //- 参数为指针常量（常指针，常量指针）
void function4(const int& var);  //- 引用参数在函数内为常量

//- 函数返回值
const int function5();  //- 返回一个常数
const int* function6(); //- 返回一个指向常量的指针变量，使用：const int *p = function6();
int* const function7(); //- 返回一个指向变量的指针常量，使用 int* const p = function7();




















