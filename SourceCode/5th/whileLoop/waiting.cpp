/** 
 * author: zzw5005
 * date: 2019/11/8 21:57
*/

/*
 * ʹ�� ��һ��ѭ����ʹ��clock()ʵ���ӳ�
 */
#include <iostream>
#include <ctime>

int main76g(){
    using namespace std;
    cout << "Enter the delay time, int seconds:";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC; //- ��������ʱ��ת����ϵͳʱ��ĳ���
    cout << "starting\a\n";
    clock_t start = clock(); //- ��ȡϵͳ�ĵ�ǰʱ��

    while(clock() - start < delay){
        ;
    }
    cout << "done \a\n";

    return 0;

}

















