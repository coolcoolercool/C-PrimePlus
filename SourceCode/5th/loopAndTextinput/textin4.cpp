/** 
 * author: zzw5005
 * date: 2019/11/9 15:40
*/

/*
 * ʹ�� cin.get() ��ȡ�ַ�
 */
#include <iostream>

int main06h(void){
    using namespace std;
    int ch; //- ע��������int���ͣ�Ϊ����EOF��ʾ��-1�����бȽ�
    int count = 0;

    while((ch = cin.get()) != EOF){
        cout.put(char(ch)); //- ǿ��ת��
        ++count;
    }

    cout << endl << count << " characters read\n";

    return 0;
}