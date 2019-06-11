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

    srand(time(0)); //随机值

    cout << "输入队列的最大数目:";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "输入模拟的时间(小时):";
    int hours;
    cin >> hours;

    long cyclelimit = MIN_PER_HR * hours;

    cout << "输入每个小时来多少个客户:";
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
            if (line.isfull()) { //如果栈已经满了，客户就会离开，turnaways++
                turnaways++;
            } else {            //如果没满，则客户数目++，
                customers++;
                temp.set(cycle);  //设置到达时间
                line.enqueue(temp); //添加到队列当中
            }
        }

        if (wait_time <= 0 && !line.isempty()) {
            line.dequeue(temp);  //弹出队列
            wait_time = temp.ptime();  //更新等待时间 + 客户的处理时间
            line_wait += cycle - temp.when();
            served++;   //已经服务的客户数目++
        }

        if (wait_time > 0) {
            wait_time--;
        }
        sum_line += line.queuecount();
    }

    //报告结果
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

    cout << "程序结束了.\n";

    return 0;
};


bool newcustomer(double x) {
    return (rand() * x / RAND_MAX < 1);
}

















