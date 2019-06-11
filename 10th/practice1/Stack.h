/** 
 * author: zzw5005
 * date: 2019/5/31 16:02
*/

#ifndef PRACTICE_STACK_H
#define PRACTICE_STACK_H

typedef unsigned long Item;

/**
 * 实现栈的类
 */
class Stack {
private:
    enum{MAX = 10};  //栈的容量大小
    Item items[MAX]; //存储栈的数组
    int top;  //栈顶指针索引，等于0表示栈为空，等于MAX表示栈满了

public:
    Stack();

    bool isempty() const;
    bool isfull() const;

    bool push(const Item & item);
    bool pop(Item & item);
};


#endif //PRACTICE_STACK_H
