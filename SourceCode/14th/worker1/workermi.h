/** 
 * author: zzw5005
 * date: 2019/6/17 19:52
*/

#ifndef CPRIMEPLUS_WORKERMI_H
#define CPRIMEPLUS_WORKERMI_H

#include <string>

class Worker_1{
private:
    std::string fullname;
    long id;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Worker_1() : fullname("no one"), id(0L){};
    Worker_1(const std::string & s, long n) : fullname(s), id(n){};

    virtual ~Worker_1() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};



class Waiter_1 : virtual public Worker_1{
private:
    int panache;

protected:
    void Data() const;
    void Get();

public:
    Waiter_1() : Worker_1(), panache(0){};
    Waiter_1(const std::string & s, long n, int p = 0)
            : Worker_1(s, n), panache(p){};
    Waiter_1(const Worker_1 & wk, int p  =0)
            : Worker_1(wk), panache(p) {};

    void Set();
    void Show() const;
};


class Singer_1 : virtual public Worker_1{
protected:
    enum{other, alto, contralto, soprano, bass, baritone, tenor};
    enum{Vtypes = 7};
    void Data() const;
    void Get();

private:
    static char* pv[Vtypes];
    int voice;

public:
    Singer_1() : Worker_1(), voice(other){};
    Singer_1(const std::string & s, long n, int v = other)
            : Worker_1(s, n), voice(v) {};
    Singer_1(const Worker_1 & wk, int v = other)
            : Worker_1(wk), voice(v){};

    void Set();
    void Show() const;
};


class SingerWaiter : public Singer_1, public Waiter_1{
protected:
    void Data() const;
    void Get();

public:
    SingerWaiter() {};
    SingerWaiter(const std::string & s, long n, int p = 0, int v = other)
                : Worker_1(s, n), Waiter_1(s,n,p), Singer_1(s,n,v){};
    SingerWaiter(const Worker_1 & wk, int p = 0, int v = other)
                : Worker_1(wk), Waiter_1(wk, p), Singer_1(wk, v){};
    SingerWaiter(const Waiter_1 & wt, int v = other)
                : Worker_1(wt), Waiter_1(wt), Singer_1(wt, v){};
    SingerWaiter(const Singer_1 & wt, int p = 0)
                : Worker_1(wt), Waiter_1(wt, p), Singer_1(wt){};

    void Set();
    void Show() const;
};




#endif //CPRIMEPLUS_WORKERMI_H
