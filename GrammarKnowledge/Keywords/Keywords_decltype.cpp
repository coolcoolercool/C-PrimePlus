/** 
 * author: zzw5005
 * date: 2020/1/2 15:52
*/

/**
 * decltype
 * decltype�ؼ������ڼ��ʵ����������ͻ���ʽ�����ͼ�ֵ����
 * �﷨: decltype(expression)
 */


/*
 * decltype��ʹ��
 */

template <typename It>
auto fcn(It beg, It end) -> decltype(*beg){
    return *beg;
}

/*

template <typename It>
auto fcn2(It beg, It end) -> typename remove_reference<decltype(*beg)>::type{
  return *beg;
};

 */
