/** 
 * author: zzw5005
 * date: 2020/1/2 10:56
*/

/**
 * struct和class
 * 总的来说，struct更适合看成一个数据结构的实现体，class更适合看成一个对象的实现体
 *
 * 区别:
 * 最本质的一个区别就是默认的访问控制
 * 1、默认的继承访问控制。struct是public的，class的private。(不过最好直接指定，免得弄错)
 * 2、struc作为数据结构的实现体，它默认的数据结构访问控制是public的，而class作为对象的实现体，它默认的成员变量访问控制是private
 */