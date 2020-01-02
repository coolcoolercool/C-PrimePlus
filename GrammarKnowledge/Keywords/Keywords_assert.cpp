/** 
 * author: zzw5005
 * date: 2020/1/2 10:44
*/

/**
 * assert()
 * 断言，是宏，而非函数。assert宏的原型定义在<assert.h>(C)、<cassert>(C++)中，其作用是如果它的条件返回错误，
 * 则终止程序执行。可以通过定义NDEBUG来关闭assert，但需要在源代码的开头，include<assert.h>之前
 */

/*
 * assert的使用
 */

#define NDEBUG  //- 加上这行，则assert不可用

#include <assert.h>

//assert(p != NULL);
