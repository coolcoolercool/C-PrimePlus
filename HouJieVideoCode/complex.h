/** 
 * author: zzw5005
 * date: 2019/10/16 20:41
*/

#ifndef CPRIMEPLUS_COMPLEX_H  //- ����ʽ����
#define CPRIMEPLUS_COMPLEX_H

//- ǰ������
class complex;

complex&
    _doapl(complex* ths, const complex& r);
complex&
    _doami(complex* ths, const complex& r);
complex&
    _doaml(complex* ths, const complex& r);


//- class body
class complex{  //- ��ͷ

public:
    //- ���캯��: �ص㹹�캯��û�з���ֵ
    //- ��ֵ����
    complex (double r = 0, double i = 0) //- Ĭ��ʵ��: ����ڴ��������ʱ��û�и�����������ʹ��Ĭ�ϵĲ���������ʽ��Ϊ0
        : re(r), im(i) //- ��ֵ��/��ʼ��: ����ڴ��������ʱ�򣬸����˲�������ʹ�ø����Ĳ���
    {    };

/* //- ����ĳ�ʼֵ�ķ�ʽ�����������ڸ�ֵ�ķ�ʽЧ��Ҫ��
   complex (double r = 0, double i = 0){
        re = re;
        im = i;
    }*/

    complex () : re(0), im(0){ }; //- ���������أ���ʾ�� �����ĸ�����ͬ

    //- �����ô���: �����ô��ݱȰ�ֵ���ݸ��ӽ�Լ��Դ�����ø��� ֵ
    //- ���ص��� ���ص�����
    complex& operator += (const complex&);  //- û�д����ţ���û��ʵ�壬��ʾ��ֻ��һ�������������Ƕ���
    complex& operator -= (const complex&);  //- �����const��ʾ�������޸�complex&
    complex& operator *= (const complex&);
    complex& operator /= (const complex&);

    //- ���ص��� ����ֵ
    double real () const{ //- �д����ţ�����ʵ�壬��ʾ����һ������
        return re;        //- ����const��ʾ�������ı��������ݣ�����򵥵�get����
    }

    double imag () const{ //- ���������class�ڶ�����ɣ���Ϊinline�����ĺ򲹣����ܳ�Ϊinline����
        return im;
    }

private:
    double re, im;

    //- ��Ԫ���������Դ��ⲿ��ȡ���private���εĳ�Ա
    //- ��ͬclass�ĸ���object��Ϊfriend(��Ԫ)
    friend complex& _doapl(complex *, const complex&);
    friend complex& _doami(complex *, const complex&);
    friend complex& _doaml(complex *, const complex&);
};

//- class body����ĸ��ֶ���

//- Ϊʲô���ﺯ��Ҫ�󷵻ص������ã�������󷵻ص���ָ�룬��������
//- ��ʵ���ﺯ��Ҫ�󷵻ص���ʲô���ģ�����󷵻ص�û��ֱ�ӹ�ϵ����ʹ���ﺯ��Ҫ�󷵻ص���ֵ���ͣ�Ҳ���Է���ָ��
//- ����������֪������������ʲô������ʽ���յģ������˵����Ĳ�����֪�������Ĳ�����ʲô������ʽ�����������ã�������ָ�룬Ҳ����ֵ��������
inline complex&
    _doapl(complex* ths, const complex& r){
        ths -> re += r.re;
        ths -> im += r.im;

        return *ths;
    }

//- ����������
inline complex&
complex::operator += (const complex& r){
    return _doapl (this, r);  //- �����thisָ�ĵ�����������Ķ���
}

inline complex&
_doami(complex* ths, const complex& r){
    ths -> re -= r.re;
    ths -> im -= r.im;
    return *ths;
}

inline complex&
_doaml(complex* ths, const complex& r){
    double f = ths->re * r.re - ths->im * r.im;
    ths->im = ths->re * r.im + ths->im * r.re;
    ths->re = f;
    return *ths;
}

inline complex&
complex::operator *= (const complex& r){
    return _doaml(this, r);
}

inline double
imag(const complex& x){
    return x.imag();
}

inline double
real(const complex& x){
    return x.real();
}
//- �ǳ�Ա����

//- �ӷ����֣�����Ϊ��Ӧ��client�����ֿ����÷��������Ӧ������������
//- ��������������û�� return by reference�����Ƿ��صıض��Ǹ�local object��local object���Ǻ��������ڴ����Ķ���
inline complex operator + (const complex& x, const complex& y){
    return complex (real(x) + real(y), imag(x) + imag(y) ); //- ��ʱ���󣬵��ͱ��֣���ʱ����û������
}

inline complex operator + (const complex& x, double y){
    return complex (real(x) + y, imag(x));
}

inline complex operator + (double x, const complex& y){
    return complex (x + real(y), imag(y));
}

//- ��������
inline complex operator - (const complex& x, const complex& y){
    return complex(real(x) - real(y), imag(x) - imag(y));
}

inline complex operator - (const complex& x, double y){
    return complex (real(x) - y, imag(x));
}

inline complex operator - (double x, const complex& y){
    return complex (x - real(y), - imag(y));
}

//- �˷�����
inline complex operator * (const complex& x, const complex& y){
    return complex (real(x) * real(y) - imag(x) * imag(y),
             real(x) * imag(y) + imag(x) * real(y));
}

inline complex operator * (const complex& x, double y){
    return complex (real(x) * y, imag(x) * y);
}

inline complex operator * (double x, const complex& y){
    return complex (x * real(y), x * imag(y));
}

//- ��������
inline complex operator / (const complex& x, double y){
    return complex (real(x) / y, imag(imag(x) / y));
}

//- ���������͸���
inline complex operator + (const complex& x){
    return x;
}

//- ����ȡ��
inline complex operator - (const complex& x){
    return complex (- real(x), - imag(x));
}

//- �����Ƿ����
inline bool operator == (const complex& x, const complex& y){
    return real (x) == real(y) && imag(x) == imag(y);
}

inline bool operator == (const complex& x, double y){
    return real (x) == y && imag(x) == 0;
}

inline bool operator == (double x, const complex& y){
    return x == real (y) && imag(y) == 0;
}

//- �Ƿ����
inline bool operator != (const complex& x, const complex& y){
    return real (x) != real(y) || imag(x) != imag(y);
}

inline bool operator != (const complex& x, double y){
    return real(x) != y || imag(x) != 0;
}

inline bool operator != (double x, const complex& y){
    return x != real(y) || imag(y) != 0;
}

#include<cmath>

//- ������
inline complex
polar(double r, double t){
    return complex (r * cos(t), r * sin(t));
}

//- �������������ʵ����ȣ��鲿�෴
inline complex
conj(const complex& x){
    return complex (real(x), -imag(x));
}

//- ������ģƽ������ʶ��ƽ������õ��ø����ĵ㵽ԭ��ľ����ƽ��
inline double
norm(const complex& x){
    return real(x) * real(x) + imag(x) * imag(x);
}


#endif //CPRIMEPLUS_COMPLEX_H
