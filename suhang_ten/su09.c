// 수행09 : [예제6-8] 다중 for문을 이용하여 2~100 사이의 소수 구하기

#include <stdio.h>

int main()
{
    int i, j, count = 0;

    for(i=2; i<=100; ++i)
    {
        for(j=2; j<i; ++j)
        {
            if(i % j == 0)
                break;
        }

        if(j == i)
        {
            count++;
            printf("%d%s", i, count % 5 ? " " : "\n");
        }
    }  

    return 0;
}