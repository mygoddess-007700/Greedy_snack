//
// Created by fxd on 2021/3/24.
//
# include <iostream>
# include <string>
# include "Initial_Interface_class.h"
# include "Map.h"
# include "Food.h"

using namespace std;
void Beginning::gotoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x - 1;
    pos.Y = y - 1;
    SetConsoleCursorPosition(handle, pos);
}

string Beginning::select(int num)
{
    switch(num)
    {
        case 0: return _a;
        case 1: return _b;
        case 2: return _c;
        case 3: return _d;
        case 4: return _e;
        case 5: return _f;
        case 6: return _g;
        case 7: return _h;
        default: exit(-2);
    }

}

void Beginning::show()
{
    //创建菜单栏上面的修饰内容
    int i;
    for(i = 0; i <10; ++i)
    {
        cout<<' ';
    }
    for(i = 0; i < 100; ++i)
    {
        cout<<'*';
    }
    cout<<endl<<endl;
    for(i = 0; i <10; ++i)
    {
        cout<<' ';
    }
    cout<<'*';
    for(i = 0; i <37; ++i)
    {
        cout<<' ';
    }
    cout<<"    贪吃蛇小游戏     ";
    for(i = 0; i <40; ++i)
    {
        cout<<' ';
    }
    cout<<'*'<<endl<<endl;
    for(i = 0; i <10; ++i)
    {
        cout<<' ';
    }
    for(i = 0; i < 100; ++i)
    {
        cout<<'*';
    }
    cout<<endl;
    for(i = 0; i < 55; ++i)
    {
        cout<<'*';
    }
    cout<<"功能菜单";
    for(i = 0; i < 55; ++i)
    {
        cout<<'*';
    }
    cout<<endl;
    for(i = 0; i <13; ++i)
    {
        cout<<' ';
    }
    for(i = 0; i < 45; ++i)
    {
        cout<<'-';
    }
    cout<<"   ";
    for(i = 0; i < 45; ++i)
    {
        cout<<'-';
    }
    cout<<endl;
    //创建菜单栏
    int k;
    for(int x = 0; x<cycle/2; ++x)
    {
        for(k = 0; k<13; ++k)
        {
            cout<<' ';
        }
        for(k = 0; k<93; ++k)
        {
            cout<<'*';
        }
        cout<<endl;
        for(k = 0; k<13; ++k)
        {
            cout<<' ';
        }
        for(int y = 0; y < 2; ++y)
        {
            int num =40;
            string tem = select(2*x+y);
            cout<<'*'<<' '<<x*2+y<<tem;
            int z = 0;
            for(int len = 50 - tem.length(); z < len; ++z)
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }

}

void Beginning::beginGame()
{
    system("cls");
    Sleep(600);
    srand((unsigned int)time(NULL));
    Map M;
    M.createMap();
    M.tip();
    return;
}

void Beginning::help()
{
    system("cls");
    Sleep(600);
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
    gotoxy(46, 16);
    cout<<"敬请期待！";
    gotoxy(56, 26);
    cout<<"请按下ESC键返回";
    if(27 == getch())
    {
        system("cls");
        Beginning B;
        B.show();
        B.choose();
    }
    else
    {
        return;
    }
}

void Beginning::explain()
{
    system("cls");
    Sleep(600);
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
    gotoxy(46, 16);
    cout<<"敬请期待！";
    gotoxy(56, 26);
    cout<<"请按下ESC键返回";
    if(27 == getch())
    {
        system("cls");
        Beginning B;
        B.show();
        B.choose();
    }
    else
    {
        return;
    }
}

void Beginning::_continue()
{
    system("cls");
    Sleep(600);
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
    gotoxy(46, 16);
    cout<<"敬请期待！";
    gotoxy(56, 26);
    cout<<"请按下ESC键返回";
    if(27 == getch())
    {
        system("cls");
        Beginning B;
        B.show();
        B.choose();
    }
    else
    {
        return;
    }
}

void Beginning::registered()
{
    system("cls");
    Sleep(600);
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
    gotoxy(46, 16);
    cout<<"敬请期待！";
    gotoxy(56, 26);
    cout<<"请按下ESC键返回";
    if(27 == getch())
    {
        system("cls");
        Beginning B;
        B.show();
        B.choose();
    }
    else
    {
        return;
    }
}

void Beginning::pet()
{
    system("cls");
    Sleep(600);
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
    gotoxy(46, 16);
    cout<<"敬请期待！";
    gotoxy(56, 26);
    cout<<"请按下ESC键返回";
    if(27 == getch())
    {
        system("cls");
        Beginning B;
        B.show();
        B.choose();
    }
    else
    {
        return;
    }
}

void Beginning::view()
{
    system("cls");
    Sleep(600);
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
    gotoxy(46, 16);
    cout<<"敬请期待！";
    gotoxy(56, 26);
    cout<<"请按下ESC键返回";
    if(27 == getch())
    {
        system("cls");
        Beginning B;
        B.show();
        B.choose();
    }
    else
    {
        return;
    }
}

void Beginning::producer()
{
    system("cls");
    Sleep(600);
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
    gotoxy(46, 16);
    cout<<"敬请期待！";
    gotoxy(56, 26);
    cout<<"请按下ESC键返回";
    if(27 == getch())
    {
        system("cls");
        Beginning B;
        B.show();
        B.choose();
    }
    else
    {
        return;
    }
}

void Beginning::choose()
{
    switch(getch())
    {
        case '0':
        {
            help();
            break;
        }
        case '1':
        {
            explain();
            break;
        }
        case '2':
        {
            beginGame();
            break;
        }
        case '3':
        {
            _continue();
            break;
        }
        case '4':
        {
            registered();
            break;
        }
        case '5':
        {
            view();
            break;
        }
        case '6':
        {
            pet();
            break;
        }
        case '7':
        {
            producer();
            break;
        }
        default:
        {
            break;
        }
    }
}

