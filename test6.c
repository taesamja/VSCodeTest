// 수행평가 - 섭씨온도를 화씨온도로 변환하기
/*
섭씨온도[°C] = (화씨온도 - 32) * 5 / 9
화씨온도[°F] = (섭씨온도 * 9 / 5) + 32
*/

#include <stdio.h>

int main()
{
    char Trans;
    float Celsius, Fahrenhite;

    printf("변환하고자 하는 단위를 입력하세요. 예) 변환 단위 : C => 의미 섭씨온도 or 변환 단위 : F => 의미 화씨온도\n");
    printf("변환 단위 : "); scanf("%c", &Trans);
    
    if(Trans == 'C' || Trans == 'c')
    {
        printf("화씨온도를 입력하세요 : ");    
        scanf("%f", &Fahrenhite);
        Celsius = (Fahrenhite - 32) * 5 / 9;
        printf("화씨온도 %.1f[°F]를 섭씨온도로 변환한 값은 %.1f[°C]\n", Fahrenhite, Celsius);

    }
    else if(Trans == 'F' || Trans == 'f')
    {
        printf("섭씨온도를 입력하세요 : ");    
        scanf("%f", &Celsius);
        Fahrenhite = (Celsius * 9 / 5) + 32;
        printf("섭씨온도 %.1f[°C]를 화씨온도로 변환한 값은 %.1f[°F]\n", Celsius, Fahrenhite);
    }
    else
    {
        printf("잘못 입력하셨습니다.\n");
    }    

    return 0;
}