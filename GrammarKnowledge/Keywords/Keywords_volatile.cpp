/** 
 * author: zzw5005
 * date: 2020/1/2 10:40
*/

/**
 * volatile
 * volatile int i = 10;
 * 1、volatile关键字是一种类型修饰符，用它声明的类型变量表示可以被某些编译器未知的因素（操作系统、硬件、其他线程等）更改。
 *    所以使用volatile告诉编译器不用对这样的对象进行优化
 * 2、volatile关键字声明的变量，每次访问时都必须从主内存中取出值（没有被volatile修饰的变量，可能由于编译器优化，从CPU寄存器中取值）
 * 3、const可以时volatile（如只读的状态寄存器）
 * 4、指针可以时volatile
 */

