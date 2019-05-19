// 수행20 : [예제9-1] 지역변수와 전역변수(func.c 파일)

#include "myheader.h"

extern int gVal;

void A()
{
    int value = 20;
    gVal++;
}