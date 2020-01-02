/** 
 * author: zzw5005
 * date: 2020/1/2 11:24
*/


/**
 * explicit(��ʽ)�ؼ���
 * 1��explicit���ι��캯��ʱ�����Է�ֹ��ʽת���͸��Ƴ�ʼ��
 * 2��explicit����ת������ʱ�����Է�ֹ��ʽת�������� ���ﾳת�� ����
 */


/*
 * explicit
 */

struct A_struct{
    A_struct(int i){}

    operator bool() const{
        return true;
    };
};

struct B_struct{
    explicit B_struct(int) {};
    explicit operator bool() const{
        return true;
    }
};

void doA_struct(A_struct a){
}

void doB_struct(B_struct b){
}

int main6bl7(){
    A_struct a1(1);                     //- ֱ�ӳ�ʼ��
    A_struct a2 = 1;                    //- ���Ƴ�ʼ��
    A_struct a3{ 1 };                   //- ֱ���б��ʼ��
    A_struct a4 = (A_struct) 1;         //- ����static_cast��ʽת��
    doA_struct(1);                      //- �����int ��A_struct����ʽת��

    if(a1);                             //- ʹ��ת������A_struct::operator bool()�Ĵ�A_struct��bool����ʽת��

    bool a6(a1);                        //- ʹ��ת������A_struct::operator bool()�Ĵ�A_struct��bool����ʽת��
    bool a7 = a1;                       //- ʹ��ת������A_struct::operator bool()�Ĵ�A_struct��bool����ʽת��
    bool a8 = static_cast<bool>(a1);    //- static_cast����ֱ�ӳ�ʼ��


    B_struct b1(1);                     //- ֱ�ӳ�ʼ��
    //B_struct b2 = 1;                  //- ���󣬱�explicit���ι��캯���Ķ��󲻿��Ը��Ƴ�ʼ��
    B_struct b3{ 1 };;                  //- ֱ���б��ʼ��
    //B_struct b4 = { 1 };              //- ���󣬱�explicit���εĹ��캯�����󲻿����б��ʼ��
    B_struct b5 = (B_struct) 1;         //- ���� static_cast��ʽ��ʼ��

    //doB_struct(1);                    //- ���󣬱�explicit���ι��캯���Ķ��󲻿��Դ�int��B_struct����ʽת��
    if(b1);                             //- ��explicit����ת������ B_struct::operator bool()�Ķ�����Դ�B_struct �� bool�İ��ﾳת��
    bool b6(b1);                        //- ��explicit����ת������ B_struct::operator bool()�Ķ�����Դ�B_struct �� bool�İ��ﾳת��
    //bool b7 = b1;                     //- ��explicit����ת�������� B_struct::operator bool()�Ķ��󲻿�����ʽת��
    bool b8 = static_cast<bool> (b1);   //- static_cast����ֱ�ӳ�ʼ��

    return 0;
}