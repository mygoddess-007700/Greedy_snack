//
// Created by fxd on 2021/3/24.
//

//问题：蛇身链表使用的是双向循环链表，但是没有使用双向的性质，如果使用，程序会有什么提升呢？
#ifndef GREEDY_SNAKE_SNACK_H
#define GREEDY_SNAKE_SNACK_H

static void *const pVoid = nullptr;

# include <iostream>
# include <windows.h>
# include <conio.h>

class Snack //蛇类
{
private:
    const static char composition = 'O'; //构成蛇身的元素
    struct _snack //蛇结点
    {
        int x;
        int y;
        _snack * pNext;
        _snack * pLast;
    };
    _snack * pHead; //创建头结点(动态初始化在structSnack()里面)
    int len; //蛇身长度
    enum direction{up, down, left, right}d; //枚举蛇运动的方向
    enum motionState{_dynamic, _static}m; //枚举蛇的动静(其实没用到)
    enum aliveState{life, death}a; //枚举蛇的生死(其实没用到)
    //color
    //speed

public:
    Snack() //蛇的构造函数
    {
        pHead = nullptr;
        len = 6;
        d = right;
        m = _static;
        a = life;
    }

    void structSnack(); //初始化一个含有7个结点的蛇身
    void reverseSnack(); //将蛇身链表倒序(其实没用到)
    void showSnack(); //将蛇身在控制台上显示出来
    void addSnack(); //添加一个结点进入蛇身(是加在头结点后面)
    void judgeMoveSnack(int ms); //1为动，0为静(其实没用到)
    void judgeLiveSnack(int as); //1为生，0为死(其实没用到)
    void moveSnake(int ms); //让蛇动起来
    bool liveSnake(int as); //判断蛇是否死亡
    void addAndDelete(); //增加一个结点并删除一个结点(添加在头结点后面，删除链表最后一个结点，感觉位置不重要，因为结点里面存储了光标的位置坐标)
    void gotoxy(int x, int y); //将光标移到所输入的坐标
    void dismiss(); //让蛇暂时消失(快速)
    void hideBroadStandard(); //主要作用是为了隐藏控制台光标
};
#endif //GREEDY_SNAKE_SNACK_H
