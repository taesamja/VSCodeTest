// 수행01 : [예제2-3] 실수형 변수를 선언하고 초기화 하기

#include <stdio.h>

int main()
{
    float a = 12.34;
    double b = 56.78;

    printf("float형 a의 값은 %f이다. \n", a);
    printf("doublet형 b의 값은 %lf이다. \n", b);

    printf("소수점 자릿수를 조정한 후의 값\n");
    printf("float형 a의 값은 %.2f이다. \n", a);
    printf("doublet형 b의 값은 %.3lf이다. \n", b);

    return 0;
}