// 수행평가 - BMI 지수 측정하기
/*
참고사이트
1. http://www.marathon.pe.kr/diet/bmi_cal.html
2. http://www.foodsafetykorea.go.kr/portal/healthyfoodlife/bmiCalcurator.do?menu_no=3071&menu_grp=MENU_NEW03
3. https://blog.naver.com/jjman003/221370359845

체질량지수(BMI:Body Mass Index) - 성인의 신장과 체중을 이용하여 지방의 양을 추정하는 공식.
계산공식 => BMI = 체중[Kg] / (키[m] x 키[m])
------------------------
BMI         : 체중상태
------------------------
18.5 미만    : 저 체중
18.5 - 22.9  : 정상
23.0 - 24.9  : 과 체중
25.0 - 29.9  : 경도 비만
30.0 - 39.9  : 중증도 비만
40.0 이상    : 고도 비만
------------------------
*/
#include <stdio.h>

int main()
{
    float bmi, weight, height;
    printf("\n--------------------------------\n");
    printf("키 입력(cm) :  ");    scanf("%f", &height);
    printf("몸무게 입력(kg) : "); scanf("%f", &weight);
    
    bmi = weight / (height*0.01*height*0.01);
    printf("\n");
    printf("bmi지수 = %.2f\n", bmi);
    printf("측정 결과 : ");

    if(bmi < 18.5) 
        printf("저체중\n");
    else if(bmi >= 18.5 && bmi <= 22.9 ) 
        printf("정상\n");
    else if(bmi >= 23.0 && bmi <= 24.9 ) 
        printf("과체중\n");
    else if(bmi >= 25.0 && bmi <= 29.9 ) 
        printf("경도 비만\n");
    else if(bmi >= 30.0 && bmi <= 39.9) 
        printf("중증도 비만\n");
    else  
        printf("고도 비만\n");

    printf("--------------------------------\n\n");

    return 0;
}