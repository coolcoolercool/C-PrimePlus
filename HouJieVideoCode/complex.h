/** 
 * author: zzw5005
 * date: 2019/10/16 20:41
*/

#ifndef CPRIMEPLUS_COMPLEX_H  //- 防卫式声明
#define CPRIMEPLUS_COMPLEX_H

//- 前置声明
class complex;

complex&
    _doapl(complex* ths, const complex& r);
complex&
    _doami(complex* ths, const complex& r);
complex&
    _doaml(complex* ths, const complex& r);


//- class body
class complex{  //- 类头

public:
    //- 构造函数: 特点构造函数没有返回值
    //- 按值传递
    complex (double r = 0, double i = 0) //- 默认实参: 如果在创建对象的时候，没有给定参数，则使用默认的参数，这里式都为0
        : re(r), im(i) //- 初值列/初始列: 如果在创建对象的时候，给定了参数，则使用给定的参数
    {    };

/* //- 上面的初始值的方式比下面括号内赋值的方式效率要差
   complex (double r = 0, double i = 0){
        re = re;
        im = i;
    }*/

    complex () : re(0), im(0){ }; //- 构造器重载：表示在 参数的个数不同

    //- 按引用传递: 按引用传递比按值传递更加节约资源，不用复制 值
    //- 返回的是 返回的引用
    complex& operator += (const complex&);  //- 没有大括号，即没有实体，表示这只是一个申明，并不是定义
    complex& operator -= (const complex&);  //- 这里的const表示，不能修改complex&
    complex& operator *= (const complex&);
    complex& operator /= (const complex&);

    //- 返回的是 返回值
    double real () const{ //- 有大括号，即有实体，表示这是一个定义
        return re;        //- 这里const表示函数不改变数据内容，比如简单的get操作
    }

    double imag () const{ //- 函数如果在class内定义完成，成为inline函数的候补，可能成为inline函数
        return im;
    }

private:
    double re, im;

    //- 友元函数，可以从外部获取类的private修饰的成员
    //- 相同class的各个object互为friend(友元)
    friend complex& _doapl(complex *, const complex&);
    friend complex& _doami(complex *, const complex&);
    friend complex& _doaml(complex *, const complex&);
};

//- class body以外的各种定义

//- 为什么这里函数要求返回的是引用，但是最后返回的是指针，这样对吗？
//- 其实这里函数要求返回的是什么样的，与最后返回的没有直接关系，即使这里函数要求返回的是值类型，也可以返回指针
//- 传递者无需知道接收者是以什么样的形式接收的（这个是说传入的参数不知道函数的参数是什么样的形式，可能是引用，可能是指针，也可能值参数本身）
inline complex&
    _doapl(complex* ths, const complex& r){
        ths -> re += r.re;
        ths -> im += r.im;

        return *ths;
    }

//- 操作符重载
inline complex&
complex::operator += (const complex& r){
    return _doapl (this, r);  //- 这里的this指的调用这个函数的对象
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
//- 非成员函数

//- 加法部分，这里为了应付client的三种可能用法，这里对应开发三个函数
//- 这里三个函数，没有 return by reference，他们返回的必定是个local object，local object就是函数本体内创建的对象
inline complex operator + (const complex& x, const complex& y){
    return complex (real(x) + real(y), imag(x) + imag(y) ); //- 临时对象，典型表现，临时对象没有名称
}

inline complex operator + (const complex& x, double y){
    return complex (real(x) + y, imag(x));
}

inline complex operator + (double x, const complex& y){
    return complex (x + real(y), imag(y));
}

//- 减法部分
inline complex operator - (const complex& x, const complex& y){
    return complex(real(x) - real(y), imag(x) - imag(y));
}

inline complex operator - (const complex& x, double y){
    return complex (real(x) - y, imag(x));
}

inline complex operator - (double x, const complex& y){
    return complex (x - real(y), - imag(y));
}

//- 乘法部分
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

//- 除法部分
inline complex operator / (const complex& x, double y){
    return complex (real(x) / y, imag(imag(x) / y));
}

//- 复数的正和负号
inline complex operator + (const complex& x){
    return x;
}

//- 复数取反
inline complex operator - (const complex& x){
    return complex (- real(x), - imag(x));
}

//- 复数是否相等
inline bool operator == (const complex& x, const complex& y){
    return real (x) == real(y) && imag(x) == imag(y);
}

inline bool operator == (const complex& x, double y){
    return real (x) == y && imag(x) == 0;
}

inline bool operator == (double x, const complex& y){
    return x == real (y) && imag(y) == 0;
}

//- 是否不相等
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

//- 极坐标
inline complex
polar(double r, double t){
    return complex (r * cos(t), r * sin(t));
}

//- 共轭复数，复数的实部相等，虚部相反
inline complex
conj(const complex& x){
    return complex (real(x), -imag(x));
}

//- 复数的模平方，标识复平面内求得到该复数的点到原点的距离的平方
inline double
norm(const complex& x){
    return real(x) * real(x) + imag(x) * imag(x);
}


#endif //CPRIMEPLUS_COMPLEX_H
