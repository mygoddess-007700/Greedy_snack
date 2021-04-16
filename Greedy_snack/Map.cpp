//
// Created by fxd on 2021/3/24.
//
# include <iostream>
# include <conio.h>
# include "Food.h"
# include "Map.h"

using namespace std;
void Map::gotoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x - 1;
    pos.Y = y - 1;
    SetConsoleCursorPosition(handle, pos);
}

void Map::createMap()
{
    //构建地图
    int i;
    for(i = 0; i<50; ++i)
    {
        cout<<"* ";
    }
    for(i = 0; i<30; ++i)
    {
        cout<<endl<<'*';
        for(int i = 0; i<97; ++i)
        {
            cout<<' ';
        }
        cout<<'*';
    }
    cout<<endl;
    for(i = 0; i<50; ++i)
    {
        cout<<"* ";
    }
//    gotoxy(2, 31);
//    cout<<"ok!";
//    gotoxy(98, 2);
//    cout<<"Y";
}

void Map::tip()
{
    gotoxy(46, 16);
    cout<<"请按下d键开始游戏！";
}

void Map::clearInside()
{
    for(int x = 2; x < 99; ++x)
    {
        for(int y = 2; y < 32; ++y)
        {
            gotoxy(x, y);
            cout<<" ";
        }
    }
}

void Map::clearTip()
{
    gotoxy(46, 16);
    cout<<"                          ";
}
