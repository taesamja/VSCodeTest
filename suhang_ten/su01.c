// ����01 : [����2-3] �Ǽ��� ������ �����ϰ� �ʱ�ȭ �ϱ�

#include <stdio.h>

int main()
{
    float a = 12.34;
    double b = 56.78;

    printf("float�� a�� ���� %f�̴�. \n", a);
    printf("doublet�� b�� ���� %lf�̴�. \n", b);

    printf("�Ҽ��� �ڸ����� ������ ���� ��\n");
    printf("float�� a�� ���� %.2f�̴�. \n", a);
    printf("doublet�� b�� ���� %.3lf�̴�. \n", b);

    return 0;
}