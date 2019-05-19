// 수행11 : [예제6-12] 1부터 더한 값이 최초로 300 이상이 되는 a 구하기

#include <stdio.h>

int main()
{
    int a = 1, sum = 0;
    
    while(sum<300)
    {
        sum += a;
        a++;
    }

    printf("합이 300이 넘는 a의 최솟값은 %d다. \n", a-1);
    printf("sum = %d\n", sum);

    return 0;
}