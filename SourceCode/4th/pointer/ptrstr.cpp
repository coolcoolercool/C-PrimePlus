/** 
 * author: zzw5005
 * date: 2019/11/8 15:09
*/

/*
 * ʹ��ָ���ַ�����ָ��
 */

#include <iostream>
#include <cstring>

int main0a(){
    using namespace std;

    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps;

    cout << animal << " and ";
    cout << bird << "\n";

    //cout << ps << "\n"; //- ��Ϊpsû�г�ʼ�������������ӡ���ܻ������

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int*) animal << endl; //- ����Ϊ��ӡ����anima�ַ�����ĵ�ַ������ʹ��(int*)��ԭ����animal�����(char*),������ǿ��ת����������ʾ���ַ�����ĵ�ַ
    cout << ps << " at " << (int*) ps << endl;

    delete[] ps;

    return 0;
}











