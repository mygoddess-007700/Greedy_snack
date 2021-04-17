# include <iostream>
# include <windows.h>
# include "Food.h"
# include "Snack.h"
# include "Map.h"

using namespace std;
void Snack::gotoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x - 1;
    pos.Y = y - 1;
    SetConsoleCursorPosition(handle, pos);
}

void Snack::structSnack()
{
    int i;
    pHead = new _snack;
    _snack * pTail = pHead;
    pTail->x = 8;
    pTail->y = 31;
    for(i=0; i<len; ++i)
    {
        if(nullptr == pHead)
        {
            cout<<"分配失败！"<<endl;
            exit(-1);
        }
        _snack * pNew = new _snack;
        if(nullptr == pNew)
        {
            cout<<"分配失败！"<<endl;
            exit(-1);
        }
        pNew->x = pTail->x-1;
        pNew->y = pTail->y;
        pTail->pNext = pNew;
        pNew->pLast = pTail;
        pNew->pNext = pHead;
        pHead->pLast = pNew;
        pTail = pNew;
    }
}

void Snack::showSnack()
{
    _snack * p = pHead->pNext;
    for(int i = 0; i < len; ++i)
    {
        gotoxy(p->x, p->y);
        cout<<composition;
        p = p->pNext;
    }
}

void Snack::dismiss()
{
    _snack * p = pHead->pNext;
    for(int i = 0; i < len; ++i)
    {
        gotoxy(p->x, p->y);
        cout<<" ";
        p = p->pNext;
    }
}

void Snack::addSnack()
{
    static Food F;
    _snack * pNew = new _snack;
    if(up == d)
    {
        pNew->x = pHead->pNext->x;
        pNew->y = pHead->pNext->y-1;
    }else if(down == d)
    {
        pNew->x = pHead->pNext->x;
        pNew->y = pHead->pNext->y+1;
    }
    else if(left == d)
    {
        pNew->x = pHead->pNext->x-1;
        pNew->y = pHead->pNext->y;
    }
    else if(right == d)
    {
        pNew->x = pHead->pNext->x+1;
        pNew->y = pHead->pNext->y;
    }
    _snack * q = pHead->pNext;
    pNew->pLast = pHead;
    pHead->pNext = pNew;
    pNew->pNext = q;
    q->pLast = pNew;
    ++len;
}

void Snack::reverseSnack()
{
    for(int i = 0; i < len+1; ++i)
    {
        _snack * pTemp;
        pTemp = pHead->pNext;
        pHead = pHead->pLast;
        pHead->pLast = pTemp;
        pHead = pHead->pLast;
    }
}

void Snack::judgeMoveSnack(int ms)
{
    if(ms == 0)
    {
        return;
    }
    else
    {
        //移动函数
        return;
    }
}

void Snack::judgeLiveSnack(int as)
{
    if(as == 1)
    {
        return;
    }
    else
    {
        //死亡函数
        return;
    }
}

void Snack::addAndDelete()
{
    _snack * pNew = new _snack;
    if(up == d)
    {
        pNew->x = pHead->pNext->x;
        pNew->y = pHead->pNext->y-1;
    }else if(down == d)
    {
        pNew->x = pHead->pNext->x;
        pNew->y = pHead->pNext->y+1;
    }
    else if(left == d)
    {
        pNew->x = pHead->pNext->x-1;
        pNew->y = pHead->pNext->y;
    }
    else if(right == d)
    {
        pNew->x = pHead->pNext->x+1;
        pNew->y = pHead->pNext->y;
    }
    _snack * q = pHead->pNext;
    pNew->pLast = pHead;
    pHead->pNext = pNew;
    pNew->pNext = q;
    q->pLast = pNew; //tmd,调了快俩小时就漏了这一句
    ++len;

    _snack * p = pHead;
    for(int i = 0; i<len; ++i)
    {
        p = p->pNext;
    }
    _snack * m = p;
    p->pLast->pNext = p->pNext;
    p->pNext->pLast = p->pLast;
    delete p;
    --len;
}

void Snack::moveSnake(int ms)
{
    hideBroadStandard();
    int i = 0;
    Map M;
    M.clearTip();
    Food F;
    F.createFood();

    while(i<1000)
    {
        dismiss();
        addAndDelete();
        if(!liveSnake(1))
        {
            break;
        }
        showSnack();
        if(F.showX() == pHead->pNext->x && F.showY() == pHead->pNext->y)
        {
            addSnack();
            F.createFood();
        }
        Sleep(150);

        if(GetAsyncKeyState(VK_UP))
        {
            d = up;
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            d = down;
        }
        if(GetAsyncKeyState(VK_LEFT))
        {
            d = left;
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            d = right;
        }
        ++i;
    }
}

void Snack::hideBroadStandard()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO hide;
    GetConsoleCursorInfo(handle, &hide);//获取控制台光标信息
    hide.bVisible = false; //隐藏控制台光标
    SetConsoleCursorInfo(handle, &hide);//设置控制台光标状态
}

bool Snack::liveSnake(int as)
{
    _snack * q = pHead;
    for(int i = 1; i < len; ++i)
    {
        q = q->pLast;
        if(pHead->pNext->x == q->x && pHead->pNext->y == q->y)
        {
            return false;
        }
    }
    for(int i = 1; i < 100; ++i)
    {
        if(pHead->pNext->x == i && (pHead->pNext->y == 1 || pHead->pNext->y == 32))
        {
            return false;
        }
    }
    for(int i = 1; i < 33; ++i)
    {
        if(pHead->pNext->y == i && (pHead->pNext->x == 1 || pHead->pNext->x == 99))
        {
            return false;
        }
    }

    return true;
}

