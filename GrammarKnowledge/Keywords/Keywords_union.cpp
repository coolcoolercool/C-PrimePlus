/** 
 * author: zzw5005
 * date: 2020/1/2 11:01
*/

/**
 * union ����
 * ���ϣ�union����һ�ֽ�Լ�ռ��������࣬һ��union�����ж�����ݳ�Ա������������ʱ��ֻ��һ�����ݳ�Ա������ֵ��
 * ��ĳ����Ա����ֵ�����������Ա�Ϊδ����״̬��
 * ���ϵ��ص����£�
 * 1��Ĭ�Ϸ��ʿ��Ʒ�Ϊpublic
 * 2�����Ժ��й��캯������������
 * 3�����ܺ����������͵ĳ�Ա
 * 4�����ܺ��м̳��������࣬������Ϊ����
 * 5�����ܺ����麯��
 * 6������union�ڶ��������������ֱ�ӷ���union��Ա
 * 7������union���ܰ���protected��Ա��private��Ա
 * 8��ȫ���������ϱ����Ǿ�̬��(static)
 */


/*
 * unionʹ��
 */

#include <iostream>

union UnionTest{
    UnionTest() : i(10){};
    int i;
    double d;
};

static union{ //- ȫ����������
    int i;
    double d;
};

int main7jh6(){
    UnionTest u;

    union{   //-  �ֲ���������
        int i;
        double d;
    };

    std::cout << u.i << std::endl;  //- ��� UnionTest ���ϵ� 10

    ::i = 20;
    std::cout << ::i << std::endl; //- ���ȫ�־�̬�������ϵ� 20

    i = 30;
    std::cout << i << std::endl; //- ����ֲ��������ϵ� 30

    return 0;
}