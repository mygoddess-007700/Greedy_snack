//
// Created by fxd on 2021/3/24.
//

#ifndef GREEDY_SNAKE_INITIAL_INTERFACE_CLASS_H
#define GREEDY_SNAKE_INITIAL_INTERFACE_CLASS_H

# include <iostream>
# include <string>
using namespace std;

class Beginning //初始化界面类
{
private: //菜单选项
    string _a;
    string _b;
    string _c;
    string _d;
    string _e;
    string _f;
    string _g;
    string _h;

    int cycle; //循环次数(每行两个菜单选项)
    //还可以扩充，扩充的时候记得cycle等于string的个数和，再微调select函数，用于创建菜单栏

public:
    Beginning() //构造函数，初始化菜单选项
    {
        _a = "游戏帮助";
        _b = "游戏说明";
        _c = "开始新的游戏";
        _d = "继续上次的游戏";
        _e = "注册你的账号";
        _f = "查看历史最高分，你的排名以及游戏次数";
        _g = "宠物系统";
        _h = "制作人";
        cycle = 8;
    }
    void show(); //展示菜单函数
    string select(int num); //选取指定菜单选项函数
    void beginGame(); //开始游戏菜单选项函数
    void help(); //帮助菜单选项函数
    void explain(); //简介菜单选项函数
    void _continue(); //继续上次游戏菜单选项函数
    void registered(); //注册菜单选项函数
    void view(); //回顾历史菜单选项函数
    void pet(); //宠物菜单选项函数
    void producer(); //显示敬请期待函数
    void choose(); //选择菜单选项函数
    void gotoxy(int x, int y); //改变光标位置函数
};

#endif //GREEDY_SNAKE_INITIAL_INTERFACE_CLASS_H
