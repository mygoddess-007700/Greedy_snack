//
// Created by fxd on 2021/3/24.
//

#ifndef GREEDY_SNAKE_INITIAL_INTERFACE_CLASS_H
#define GREEDY_SNAKE_INITIAL_INTERFACE_CLASS_H

# include <iostream>
# include <string>
using namespace std;

class Beginning //��ʼ��������
{
private: //�˵�ѡ��
    string _a;
    string _b;
    string _c;
    string _d;
    string _e;
    string _f;
    string _g;
    string _h;

    int cycle; //ѭ������(ÿ�������˵�ѡ��)
    //���������䣬�����ʱ��ǵ�cycle����string�ĸ����ͣ���΢��select���������ڴ����˵���

public:
    Beginning() //���캯������ʼ���˵�ѡ��
    {
        _a = "��Ϸ����";
        _b = "��Ϸ˵��";
        _c = "��ʼ�µ���Ϸ";
        _d = "�����ϴε���Ϸ";
        _e = "ע������˺�";
        _f = "�鿴��ʷ��߷֣���������Լ���Ϸ����";
        _g = "����ϵͳ";
        _h = "������";
        cycle = 8;
    }
    void show(); //չʾ�˵�����
    string select(int num); //ѡȡָ���˵�ѡ���
    void beginGame(); //��ʼ��Ϸ�˵�ѡ���
    void help(); //�����˵�ѡ���
    void explain(); //���˵�ѡ���
    void _continue(); //�����ϴ���Ϸ�˵�ѡ���
    void registered(); //ע��˵�ѡ���
    void view(); //�ع���ʷ�˵�ѡ���
    void pet(); //����˵�ѡ���
    void producer(); //��ʾ�����ڴ�����
    void choose(); //ѡ��˵�ѡ���
    void gotoxy(int x, int y); //�ı���λ�ú���
};

#endif //GREEDY_SNAKE_INITIAL_INTERFACE_CLASS_H
