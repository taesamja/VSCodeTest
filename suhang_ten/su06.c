// ����06 : [����5-2] ������ �Է¹޾� ���� ����ϱ�

#include <stdio.h>

int main()
{
    int jumsu;

    printf("0������ 100�� ������ ������ �Է��ϼ���.\n");
    scanf("%d", &jumsu);

    if(jumsu >= 0 && jumsu <= 100)
        printf("�Է��� ������ %d���Դϴ�.\n", jumsu);
    else
    {
        printf("0������ 100�� ���̸� �Է��ϼž� �մϴ�.\n");
        return 0;
    }
        
    if(jumsu >= 0 && jumsu < 60)
        printf("%d���� F�����Դϴ�.\n", jumsu);
    else if(jumsu >= 60 && jumsu < 70)
        printf("%d���� D�����Դϴ�.\n", jumsu);
    else if(jumsu >= 70 && jumsu < 80)
        printf("%d���� C�����Դϴ�.\n", jumsu);
    else if(jumsu >= 80 && jumsu < 90)
        printf("%d���� B�����Դϴ�.\n", jumsu);
    else if(jumsu >= 90 && jumsu <= 100)
        printf("%d���� A�����Դϴ�.\n", jumsu);

    return 0;
}