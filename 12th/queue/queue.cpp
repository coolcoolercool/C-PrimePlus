/** 
 * author: zzw5005
 * date: 2019/6/3 15:59
*/


#include <cstdlib>
#include "queue.h"

using namespace std;

/**
 * 构造器
 * @param qs
 */
Queue::Queue(int qs) : qsize(qs){
    front = rear = nullptr;
    items = 0;
}

/**
 * 析构函数
 */
Queue::~Queue(){
    Node * temp;
    while(front != rear){
        temp = front;            //保存前一个指针
        front = front -> next;   //移动到下一个指针
        delete temp;             //释放前一个指针
    }
}

/**
 * 是否栈空
 * @return
 */
bool Queue::isempty() const{
    return items == 0;
}

/**
 * 是否栈满
 * @return
 */
bool Queue::isfull() const{
    return items == qsize;
}

/**
 * 返回栈中的节点数目
 * @return
 */
int Queue::queuecount() const{
    return items;
}

/**
 * 压栈
 * @param item
 * @return
 */
bool Queue::enqueue(const Item & item){
    if(isfull()){
        return false;
    }

    Node * add = new Node;
    add -> item = item;
    add -> next = nullptr;
    items++;

    if(front == nullptr){
        front = add;
    }else{
        rear = add;
    }
    rear = add;
    return true;
}

/**
 * 弹栈
 * @param item
 * @return
 */
bool Queue::dequeue(Item & item){
    if(front == nullptr){
        return false;
    }
    item = front -> item;
    items--;
    Node * temp = front;
    front = front -> next;
    delete temp;

    if(items == 0){
        rear = nullptr;
    }

    return true;
}



//顾客类的方法
void Customer::set(long when){
    processtime = rand() % 3 + 1;  //处理任务时间随机1~3
    arrive = when;
}


















