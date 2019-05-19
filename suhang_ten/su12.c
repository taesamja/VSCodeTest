// 수행12 : [예제6-17] 간단한 break문 사용하기

#include <stdio.h>

int main()
{
    int i;

    for(i=1;i<100;i++)
    {
        printf("%d ", i);
        if(i >= 5) break;
    }

    printf("\nfor문을 빠져나왔습니다.\n");
    
    return 0;
}