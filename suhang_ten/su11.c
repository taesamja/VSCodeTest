// ����11 : [����6-12] 1���� ���� ���� ���ʷ� 300 �̻��� �Ǵ� a ���ϱ�

#include <stdio.h>

int main()
{
    int a = 1, sum = 0;
    
    while(sum<300)
    {
        sum += a;
        a++;
    }

    printf("���� 300�� �Ѵ� a�� �ּڰ��� %d��. \n", a-1);
    printf("sum = %d\n", sum);

    return 0;
}