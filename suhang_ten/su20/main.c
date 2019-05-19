// Visual Studio Code에서 컴파일 방법 : gcc main.c func.c myheader.h -o su20.exe
// 수행20 : [예제9-1] 지역변수와 전역변수(main.c 파일)

#include <stdio.h>
#include "myheader.h"

int gVal = 1;
int main()
{
    int value = 10;

    printf("지역변수 value 값은 %d이다.\n", value);
    printf("전역변수 gVal 값은 %d이다.\n", gVal);

    A();

    printf("함수 A() 실행 후\n");
    printf("지역변수 value 값은 %d이다.\n", value);
    printf("전역변수 gVal 값은 %d이다.\n", gVal);

    return 0;
}