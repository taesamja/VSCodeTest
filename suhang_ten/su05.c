// ����05 : [����4-5] �հݰ� ���հ� �����ϱ�

#include <stdio.h>

int main()
{
    int score, grade;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &score);

    grade = (score >= 90);

    if(grade == 1)
        printf("����� %d, �հ�\n", grade);
    else
        printf("����� %d, ���հ�\n", grade);

    return 0;
}