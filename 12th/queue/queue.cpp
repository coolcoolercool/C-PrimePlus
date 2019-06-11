/** 
 * author: zzw5005
 * date: 2019/6/3 15:59
*/


#include <cstdlib>
#include "queue.h"

using namespace std;

/**
 * ������
 * @param qs
 */
Queue::Queue(int qs) : qsize(qs){
    front = rear = nullptr;
    items = 0;
}

/**
 * ��������
 */
Queue::~Queue(){
    Node * temp;
    while(front != rear){
        temp = front;            //����ǰһ��ָ��
        front = front -> next;   //�ƶ�����һ��ָ��
        delete temp;             //�ͷ�ǰһ��ָ��
    }
}

/**
 * �Ƿ�ջ��
 * @return
 */
bool Queue::isempty() const{
    return items == 0;
}

/**
 * �Ƿ�ջ��
 * @return
 */
bool Queue::isfull() const{
    return items == qsize;
}

/**
 * ����ջ�еĽڵ���Ŀ
 * @return
 */
int Queue::queuecount() const{
    return items;
}

/**
 * ѹջ
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
 * ��ջ
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



//�˿���ķ���
void Customer::set(long when){
    processtime = rand() % 3 + 1;  //��������ʱ�����1~3
    arrive = when;
}


















