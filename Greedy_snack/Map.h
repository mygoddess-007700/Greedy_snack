//
// Created by fxd on 2021/3/24.
//

#ifndef GREEDY_SNAKE_MAP_H
#define GREEDY_SNAKE_MAP_H

# include <iostream>
# include <windows.h>
# include <conio.h>

class Map //��ͼ��
{
public:
    void createMap(); //��������һ����ͼ����
    void gotoxy(int x, int y); //������Ƶ������������
    void tip(); //������ʾ����d��ʼ��Ϸ
    void clearInside(); //�ѵ�ͼ�������(ȫ���������������clear����̫������ʵ�ֲ���)
    void clearTip(); //�����ʾ����
};


#endif //GREEDY_SNAKE_MAP_H
