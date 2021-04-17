//
// Created by fxd on 2021/3/24.
//

#ifndef GREEDY_SNAKE_FOOD_H
#define GREEDY_SNAKE_FOOD_H

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <windows.h>



class Food
{
private:
    struct foodCoordinate //食物的坐标
    {
        int x;
        int y;
    }food;

    struct leftDownMargin //食物左下边界
    {
        int x;
        int y;
    }LD;

    struct rightUpMargin //食物右上边界
    {
        int x;
        int y;
    }RU;

public:
    Food();
    int showX(); //返回食物的x坐标
    int showY(); //返回食物的y坐标
    void createFood(); //在地图上创造食物函数
    void gotoxy(int x, int y); //改变光标位置函数
    void clearFood(); //清除食物函数(没有使用，事实上由原理可知根本不需要)
};

#endif //GREEDY_SNAKE_FOOD_H
