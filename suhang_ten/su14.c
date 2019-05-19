// 수행14 : [예제7-5] 학생별 평균 구하기

#include <stdio.h>

int main()
{
    int i, j, sum = 0;
    int a[][3] = {
        {90,  80,  90},     // 영희의 국어, 영어, 수학 점수
        {70, 100, 100},     // 철수의 국어, 영어, 수학 점수
        {80,  90,  90}      // 미나의 국어, 영어, 수학 점수
    };

    double average[3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum += a[i][j];
        }

        average[i] = (double)sum / j;

        printf("%d번 학생의 평균은 %.2lf이다.\n", i+1, average[i]);

        sum = 0;
    }
    
    return 0;
}
