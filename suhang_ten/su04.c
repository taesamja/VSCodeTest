// 수행04 : [예제4-4] 정사각형의 넓이 구하기

#include <stdio.h>

int main()
{
    int length, area;

    printf("정사각형 한 변의 길이를 입력하시오.\n");
    scanf("%d", &length);

    area = length * length;
    printf("정사각형의 넓이는 %d다.\n", area);
    
    return 0;
}