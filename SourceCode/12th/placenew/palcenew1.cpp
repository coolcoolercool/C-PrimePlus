/** 
 * author: zzw5005
 * date: 2019/6/3 11:13
*/

#include <iostream>
#include <new>
#include <string>

using namespace std;
const int BUF = 512;

class JustTesting{
private:
    string words;
    int number;

public:
    JustTesting(const string & s = "Just Testing", int n = 0){
        words = s;
        number = n;
        cout << words << " ��������." << endl;
    }

    ~JustTesting(){
        cout << words << "��������." << endl;
    }

    void show() const{
        cout << words << ": " << number << endl;
    }
};

int main1n(){
    char * buffer = new char[BUF];

    JustTesting * pc1, *pc2;

    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);

    cout << "�ڴ���ַ: " << endl << "buffer: "
         << (void * ) buffer << "    heap: " << pc2 << endl;

    cout << "�ڴ��ַ������: " << endl;

    cout << pc1<<  ": ";
    pc1->show();
    cout << pc2 << ": ";
    pc2->show();

    JustTesting * pc3, *pc4;
    pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("heap2",10);

    cout << pc3<<  ": ";
    pc3->show();
    cout << pc4 << ": ";
    pc4->show();

    delete pc2;
    delete pc4;

    //����˳��Ҳ���н����ģ��紴���������٣���Ϊ���ܶ���֮�����������ϵ
    pc3->~JustTesting();  //��Ҫ��ʽ�����������������ٶ���
    pc1->~JustTesting();

    delete[] buffer;
    cout << "bye\n";

    return 0;
}






























