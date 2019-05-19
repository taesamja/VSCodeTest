// 수행02 : [예제3-3] 8진수, 10진수, 16진수 문자 출력하기

#include <stdio.h>

int main()
{
    int Number = 65;

    printf("65를 8진수로 변환 : %o\n", Number);
    printf("65를 10진수로 변환 : %d\n", Number);
    printf("65를 16진수로 변환 : %x\n", Number);
    printf("65를 문자형으로 변환 : %c\n", Number);

    return 0;
}