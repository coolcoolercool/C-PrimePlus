/** 
 * author: zzw5005
 * date: 2019/12/31 15:04
*/

/**
 * static
 * 作用：
 * 1、修饰普通变量，修改变量的储存区域和声明周期，使变量存储在静态区，在main函数运行前就分配了空间，如果有初始值就用
 *    初始值去初始化它，如果没有初始值，系统会用默认初始值去初始化它
 * 2、修饰普通函数，比奥名函数的作用范围，仅在定义该函数的文件内才能使用。在多人开发项目时，为了放置与他人命名空间里的
 *    函数重名，可以酱函数定义为static
 * 3、修饰成员变量，修饰成员变量使所有对象只保存一个该变量，而且不需要生成对象就可以访问该对象的成员
 * 4、修饰成员函数，修饰成员函数使得不需要生成对象就可以访问该函数，但是在static函数内不能访问非静态成员
 */