// ������ - �����µ��� ȭ���µ��� ��ȯ�ϱ�
/*
�����µ�[��C] = (ȭ���µ� - 32) * 5 / 9
ȭ���µ�[��F] = (�����µ� * 9 / 5) + 32
*/

#include <stdio.h>

int main()
{
    char Trans;
    float Celsius, Fahrenhite;

    printf("��ȯ�ϰ��� �ϴ� ������ �Է��ϼ���. ��) ��ȯ ���� : C => �ǹ� �����µ� or ��ȯ ���� : F => �ǹ� ȭ���µ�\n");
    printf("��ȯ ���� : "); scanf("%c", &Trans);
    
    if(Trans == 'C' || Trans == 'c')
    {
        printf("ȭ���µ��� �Է��ϼ��� : ");    
        scanf("%f", &Fahrenhite);
        Celsius = (Fahrenhite - 32) * 5 / 9;
        printf("ȭ���µ� %.1f[��F]�� �����µ��� ��ȯ�� ���� %.1f[��C]\n", Fahrenhite, Celsius);

    }
    else if(Trans == 'F' || Trans == 'f')
    {
        printf("�����µ��� �Է��ϼ��� : ");    
        scanf("%f", &Celsius);
        Fahrenhite = (Celsius * 9 / 5) + 32;
        printf("�����µ� %.1f[��C]�� ȭ���µ��� ��ȯ�� ���� %.1f[��F]\n", Celsius, Fahrenhite);
    }
    else
    {
        printf("�߸� �Է��ϼ̽��ϴ�.\n");
    }    

    return 0;
}