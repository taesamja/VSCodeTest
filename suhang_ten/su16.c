// ����16 : [����7-10] �迭�� �ּ� ����ϱ�

#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};
    int i, aryLength;

    aryLength = sizeof(a) / sizeof(int);

    printf("�迭�� ���� ���� ����ϸ� \n");
    for(i=0; i<aryLength; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("�迭 ������ �ּҰ��� ����ϸ� \n");
    for(i=0; i<aryLength; i++)
    {
        printf("&a[%d] = %p\n", i, &a[i]);
    }

    return 0;
}
