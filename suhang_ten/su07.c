// ����07 : [����5-3] ���� if�� ����ϱ�

#include <stdio.h>

int main()
{
    int input;
    printf("����� �Է��ϼ���.\n");
    scanf("%d", &input);

    if(input >= 0)
    {
        if(input % 2 == 0)
            printf("�Է��� �� %d�� ¦���Դϴ�.\n", input);
        else
            printf("�Է��� �� %d�� Ȧ���Դϴ�.\n", input);
    }
    else
    {
        printf("�Է��� �� %d�� �����Դϴ�.\n", input);
    }    

    return 0;
}