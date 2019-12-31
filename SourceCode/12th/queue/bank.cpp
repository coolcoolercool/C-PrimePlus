#include <cstdlib>
#include <ctime>
#include <iostream>
#include "queue.h"

/**
 * author: zzw5005
 * date: 2019/6/3 16:11
*/


const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main_9b() {
    using namespace std;

    srand(time(0)); //���ֵ

    cout << "������е������Ŀ:";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "����ģ���ʱ��(Сʱ):";
    int hours;
    cin >> hours;

    long cyclelimit = MIN_PER_HR * hours;

    cout << "����ÿ��Сʱ�����ٸ��ͻ�:";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;


    for (int cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) {
            if (line.isfull()) { //���ջ�Ѿ����ˣ��ͻ��ͻ��뿪��turnaways++
                turnaways++;
            } else {            //���û������ͻ���Ŀ++��
                customers++;
                temp.set(cycle);  //���õ���ʱ��
                line.enqueue(temp); //��ӵ����е���
            }
        }

        if (wait_time <= 0 && !line.isempty()) {
            line.dequeue(temp);  //��������
            wait_time = temp.ptime();  //���µȴ�ʱ�� + �ͻ��Ĵ���ʱ��
            line_wait += cycle - temp.when();
            served++;   //�Ѿ�����Ŀͻ���Ŀ++
        }

        if (wait_time > 0) {
            wait_time--;
        }
        sum_line += line.queuecount();
    }

    //������
    if (customers > 0) {
        cout << "customers accpted: " << customers << endl;
        cout << " customers served: " << served << endl;
        cout << "        turnaways: " << turnaways << endl;
        cout << "averge queue size: ";
        cout.precision(2);

        cout.setf(ios_base::fixed, ios_base::floatfield);

        cout << (double) (sum_line / cyclelimit) << endl;
        cout << " averge wait_time: " << (double) (line_wait / served) << " minutes.\n";
    } else {
        cout << "No customers!\n";
    }

    cout << "���������.\n";

    return 0;
};


bool newcustomer(double x) {
    return (rand() * x / RAND_MAX < 1);
}

















