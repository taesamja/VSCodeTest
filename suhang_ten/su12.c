// ����12 : [����6-17] ������ break�� ����ϱ�

#include <stdio.h>

int main()
{
    int i;

    for(i=1;i<100;i++)
    {
        printf("%d ", i);
        if(i >= 5) break;
    }

    printf("\nfor���� �������Խ��ϴ�.\n");
    
    return 0;
}