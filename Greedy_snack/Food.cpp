//
// Created by fxd on 2021/3/24.
//
# include <iostream>
# include <stdlib.h>
# include <windows.h>
# include "Food.h"
using namespace std;

void Food::gotoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x - 1;
    pos.Y = y - 1;
    SetConsoleCursorPosition(handle, pos);
}

Food::Food()
{
    LD.x = 2;
    LD.y = 31;
    RU.x = 98;
    RU.y = 2;
    food.x = 3;
    food.y = 3;

}

int Food::showX()
{
    return food.x;
}

int Food::showY()
{
    return food.y;
}

void Food::createFood()
{

    food.x = 2 + rand()%97;
    food.y = 2 + rand()%30;
    gotoxy(food.x, food.y);
    cout<<'*';
}

void Food::clearFood()
{
    gotoxy(food.x, food.y);
    cout<<" ";
}

