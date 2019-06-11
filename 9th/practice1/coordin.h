//
// Created by Administrator on 2019/5/28.
//

#ifndef PRACTICE_COORDIN_H  //如果编译器没有使用预处理编译指令 #define 定义名称PRACTICE_COORDIN_H，才会处理#ifndef 和 #endif之间的语句
#define PRACTICE_COORDIN_H

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

//函数原型
polar rect_to_polar_1(rect xypos);
void show_polar_1(polar dapos);

#endif //PRACTICE_COORDIN_H
