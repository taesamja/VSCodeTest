// ����20 : [����9-1] ���������� ��������(main.c ����)

#include <stdio.h>
#include "myheader.h"

int gVal = 1;
int main()
{
    int value = 10;

    printf("�������� value ���� %d�̴�.\n", value);
    printf("�������� gVal ���� %d�̴�.\n", gVal);

    A();

    printf("�Լ� A() ���� ��\n");
    printf("�������� value ���� %d�̴�.\n", value);
    printf("�������� gVal ���� %d�̴�.\n", gVal);

    return 0;
}