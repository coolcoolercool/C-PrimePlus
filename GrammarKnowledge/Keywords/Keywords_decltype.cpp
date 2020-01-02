/** 
 * author: zzw5005
 * date: 2020/1/2 15:52
*/

/**
 * decltype
 * decltype关键字用于检查实体的声明类型或表达式的类型及值分类
 * 语法: decltype(expression)
 */


/*
 * decltype的使用
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
