// ����08 : [����5-6] default�� ����Ͽ� ���� ó���ϱ�

#include <stdio.h>

int main()
{
    int input;

    printf("����� �λ��ϴ� ���� ���ڽ��ϴ�.\n");
    printf("��ħ �λ�� 1���� ��������.\n");
    printf("���� �λ�� 2���� ��������.\n");
    printf("���� �λ�� 3���� ��������.\n");
    scanf("%d", &input);

    switch(input) 
    {
        case 1 :
            printf("Good Morning!!\n");
            break;
        case 2 :
            printf("Good Afternoon!!\n");
            break;
        case 3 :
            printf("Good Night!!\n");
            break;
        default :
            printf("�߸� �Է��߽��ϴ�. 1-3 ������ ���ڸ� �Է��ϼ���.\n");        
    }    

    return 0;
}