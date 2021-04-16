//
// Created by fxd on 2021/3/24.
//

#ifndef GREEDY_SNAKE_FOOD_H
#define GREEDY_SNAKE_FOOD_H

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <windows.h>



class Food
{
private:
    struct foodCoordinate //ʳ�������
    {
        int x;
        int y;
    }food;

    struct leftDownMargin //ʳ�����±߽�
    {
        int x;
        int y;
    }LD;

    struct rightUpMargin //ʳ�����ϱ߽�
    {
        int x;
        int y;
    }RU;

public:
    Food();
    int showX(); //����ʳ���x����
    int showY(); //����ʳ���y����
    void createFood(); //�ڵ�ͼ�ϴ���ʳ�ﺯ��
    void gotoxy(int x, int y); //�ı���λ�ú���
    void clearFood(); //���ʳ�ﺯ��(û��ʹ�ã���ʵ����ԭ���֪��������Ҫ)
};

#endif //GREEDY_SNAKE_FOOD_H
