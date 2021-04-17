//
// Created by fxd on 2021/3/24.
//
# include <iostream>
# include <windows.h>
# include "GameEnd.h"
using namespace std;
void GameEnd::gotoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x - 1;
    pos.Y = y - 1;
    SetConsoleCursorPosition(handle, pos);
}
void GameEnd::createGameEnd()
{
    gotoxy(46, 16);
    cout<<"ÓÎÏ·½áÊø£¡";
}

