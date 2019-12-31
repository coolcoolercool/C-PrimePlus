/** 
 * author: zzw5005
 * date: 2019/6/9 14:52
*/

#ifndef PRACTICE_DMA_H
#define PRACTICE_DMA_H


#include <ostream>

using namespace std;

/**
 * 基类
 */
class  baseDMA{
private:
    char * label;
    int rating;

public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);

    virtual ~baseDMA();

    baseDMA & operator=(const baseDMA & rs);

    friend ostream & operator<<(ostream & os, const baseDMA & rs);
};

/**
 * 派生类1
 */
class lacksDMA : public baseDMA{
private:
    enum{COL_NUM = 40};
    char color[COL_NUM];

public:
    lacksDMA(const char * c = "black", const char *l = "null", int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);

    friend ostream & operator<<(ostream & os, const lacksDMA & rs);
};

/**
 * 派生类2
 */
class hasDMA : public baseDMA{
private:
    char * style;

public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const baseDMA & rs);
    hasDMA(const hasDMA & rs);

    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend ostream & operator<<(ostream & os, const hasDMA & rs);
};

#endif //PRACTICE_DMA_H






















