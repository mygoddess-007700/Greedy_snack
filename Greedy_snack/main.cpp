/*
ʱ�䣺2021/3/24
Ŀ�ģ���һ�γ�������С��Ϸ��̰����
���⣺1.���˵��Բ���ϵͳ��64λ�ģ��ҽ������32λ�ģ����˳��Թ����ַ��������������������������������޷��������ҵ����ϱ�������ɵ�̰����Ӧ�ó������ҽ�ĵ��������У������������Ҫ�����ˡ�
     2.windows.h��conio.h�Ŀ⺯����ʵ���Ѿ���ʱ����̭������һ����ʱ����ķ�����ʵ��̰���߻�����м�ֵ
     3.����̨С�ڴ��ڲ��������ҵ��������Ҫ�Ľ��������Ŀ�ɹ���Ӧ����ô���أ���Ҫѧϰ��Ϸ����������⺯������Щ�д����ҽ�һ��̽�����������ѧϰ�˿��Ը��¼����ķ����������һ��Ƴ�̰����2.0
     4.�ı��꺯��������ж���ʹ�ã����ֻ����һ���أ�
���ͣ�www.mygoddess.icu
github:mygoddess-007700
*/
# include "Initial_Interface_class.h" //���ó�ʼ��������
# include "Map.h" //�������ɵ�ͼ��
# include "Snack.h" //��������
# include "GameEnd.h" //������Ϸ����������

void hideBroadStandard(); //��Ҫ������Ϊ�����ؿ���̨���
void color(); //�ı�������ɫ��Ϊ�˺ÿ�
int main()
{
    hideBroadStandard();
    color();
    Beginning B; //����һ����ʼ�����������
    B.show();
    B.choose();
    Snack S; //����һ���������
    S.structSnack();
    S.showSnack();

    while(true)
    {
        if('d' == getch()) //����������d���߿�ʼ����Ҳ�Ϳ�ʼ��Ϸ
        {
            S.moveSnake(1);
            break;
        }
        else
        {
            continue;
        }
    }
    GameEnd G; //����һ����Ϸ�������������
    G.createGameEnd();
    system("pause"); //Ϊ������exe�ļ������ͣһ��

    
    return 0;
}

void hideBroadStandard()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO hide;
    GetConsoleCursorInfo(handle, &hide);//��ȡ����̨�����Ϣ
    hide.bVisible = false; //���ؿ���̨���
    SetConsoleCursorInfo(handle, &hide);//���ÿ���̨���״̬
}

void color()
{
    system("color 0a");
}