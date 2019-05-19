// 수행13 : [예제6-19] 2의 배수이면서 3의 배수인 수를 제외하고 출력하기

#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i=1;i<10;i++)
    {
        if( (i % 2 == 0) && (i % 3 == 0) ) continue;
        printf("%d ", i);
    }

    printf("\n");
    
    return 0;
}
