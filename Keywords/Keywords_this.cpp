/** 
 * author: zzw5005
 * date: 2019/12/31 15:09
*/

/**
 * this指针
 * 1、this指针是一个隐含于每个非静态成员函数中的特别指针。它指向调用该成员函数的那个对象。
 * 2、当对一个对象调用成员函数时，编译程序先将对象的地址赋给this指针，然后调用成员函数，每次成员函数存取数据成员时，都隐式使用this指针。
 * 3、当一个成员函数被调用时，自动向它床底一个隐含的参数，该参数是一个指向这个成员函数所在的对象的指针。
 * 4、this指针被隐含地声明为：ClassName *const this，这意味着不能给this指针赋值；在ClassName类的const成员函数中，
 *    this指针的类型为：const ClassName* const，这说明不能对this指针所指向的这种对象是不可修改的（即不能对这种对象的数据成员进行赋值操作）
 * 5、this并不是一个常规变量，而是一个右值，所以不能取得this的地址（不能&this）
 * 6、在以下的场景中，经常需要显式引用this指针：
 *   （1）为实现对象链式引用；
 *   （2）为避免对同一对象进行赋值操作；
 *   （3）在实现一些数据结构时，如list
 */