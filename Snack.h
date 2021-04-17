//
// Created by fxd on 2021/3/24.
//

//���⣺��������ʹ�õ���˫��ѭ����������û��ʹ��˫������ʣ����ʹ�ã��������ʲô�����أ�
#ifndef GREEDY_SNAKE_SNACK_H
#define GREEDY_SNAKE_SNACK_H

static void *const pVoid = nullptr;

# include <iostream>
# include <windows.h>
# include <conio.h>

class Snack //����
{
private:
    const static char composition = 'O'; //���������Ԫ��
    struct _snack //�߽��
    {
        int x;
        int y;
        _snack * pNext;
        _snack * pLast;
    };
    _snack * pHead; //����ͷ���(��̬��ʼ����structSnack()����)
    int len; //������
    enum direction{up, down, left, right}d; //ö�����˶��ķ���
    enum motionState{_dynamic, _static}m; //ö���ߵĶ���(��ʵû�õ�)
    enum aliveState{life, death}a; //ö���ߵ�����(��ʵû�õ�)
    //color
    //speed

public:
    Snack() //�ߵĹ��캯��
    {
        pHead = nullptr;
        len = 6;
        d = right;
        m = _static;
        a = life;
    }

    void structSnack(); //��ʼ��һ������7����������
    void reverseSnack(); //������������(��ʵû�õ�)
    void showSnack(); //�������ڿ���̨����ʾ����
    void addSnack(); //���һ������������(�Ǽ���ͷ������)
    void judgeMoveSnack(int ms); //1Ϊ����0Ϊ��(��ʵû�õ�)
    void judgeLiveSnack(int as); //1Ϊ����0Ϊ��(��ʵû�õ�)
    void moveSnake(int ms); //���߶�����
    bool liveSnake(int as); //�ж����Ƿ�����
    void addAndDelete(); //����һ����㲢ɾ��һ�����(�����ͷ�����棬ɾ���������һ����㣬�о�λ�ò���Ҫ����Ϊ�������洢�˹���λ������)
    void gotoxy(int x, int y); //������Ƶ������������
    void dismiss(); //������ʱ��ʧ(����)
    void hideBroadStandard(); //��Ҫ������Ϊ�����ؿ���̨���
};
#endif //GREEDY_SNAKE_SNACK_H
