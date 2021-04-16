/*
时间：2021/3/24
目的：第一次尝试做个小游戏：贪吃蛇
问题：1.本人电脑操作系统是64位的，我姐电脑是32位的，本人尝试过多种方法，例如更换编译器，更换软件，都无法做到让我电脑上编译后生成的贪吃蛇应用程序在我姐的电脑上运行，或许这个问题要保留了。
     2.windows.h和conio.h的库函数事实上已经被时代淘汰，运用一个与时俱进的方法来实现贪吃蛇或许更有价值
     3.控制台小黑窗口不能满足我的需求，如果要改进画面和项目可观性应该怎么做呢？是要学习游戏引擎和其他库函数吗？这些有待于我进一步探索。如果将来学习了可以更新技术的方法，或许我会推出贪吃蛇2.0
     4.改变光标函数多个类中都有使用，如何只定义一个呢？
博客：www.mygoddess.icu
github:mygoddess-007700
*/
# include "Initial_Interface_class.h" //调用初始化界面类
# include "Map.h" //调用生成地图类
# include "Snack.h" //调用蛇类
# include "GameEnd.h" //调用游戏结束界面类

void hideBroadStandard(); //主要作用是为了隐藏控制台光标
void color(); //改变文字颜色，为了好看
int main()
{
    hideBroadStandard();
    color();
    Beginning B; //构造一个初始化界面类对象
    B.show();
    B.choose();
    Snack S; //构造一个蛇类对象
    S.structSnack();
    S.showSnack();

    while(true)
    {
        if('d' == getch()) //键盘上输入d，蛇开始动，也就开始游戏
        {
            S.moveSnake(1);
            break;
        }
        else
        {
            continue;
        }
    }
    GameEnd G; //构造一个游戏结束界面类对象
    G.createGameEnd();
    system("pause"); //为了运行exe文件最后暂停一下

    
    return 0;
}

void hideBroadStandard()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO hide;
    GetConsoleCursorInfo(handle, &hide);//获取控制台光标信息
    hide.bVisible = false; //隐藏控制台光标
    SetConsoleCursorInfo(handle, &hide);//设置控制台光标状态
}

void color()
{
    system("color 0a");
}