//
// Created by fxd on 2021/3/24.
//

#ifndef GREEDY_SNAKE_MAP_H
#define GREEDY_SNAKE_MAP_H

# include <iostream>
# include <windows.h>
# include <conio.h>

class Map //地图类
{
public:
    void createMap(); //暴力创建一个地图界面
    void gotoxy(int x, int y); //将光标移到所输入的坐标
    void tip(); //输入提示：按d开始游戏
    void clearInside(); //把地图清除函数(全部清除再生成由于clear函数太慢所以实现不了)
    void clearTip(); //清除提示函数
};


#endif //GREEDY_SNAKE_MAP_H
