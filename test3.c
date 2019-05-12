// 수행평가 - 달력 출력하기
/*
윤년은 태양력에서 2월 29일이 있는 해입니다.
지구의 공전주기는 365.2422일입니다. 따라서 1년을 365일로만 하면 약 4년에 한번씩 하루의 오차가 발생하므로 이를 보정하기 위해 도입한 것입니다. 
또 2월에 하루를 추가한 이유도 2월이 날수가 가장 적기 때문입니다.

윤년을 구하는 방법은 다음과 같습니다.
1. 100으로 나누어지지 않고 4로 나누어지면 윤년
2. 400으로 나누어 지는 해는 윤년
3. 100으로 나누어지지만 400으로 나누어지지 않는 해는 평년
* 추가: 위의 3가지 조건을 모두 충족하지 않는 해는 평년

다음의 예를 보면 알수 있을 것입니다.
1. 2005년: 4,100,400 모두 나누어지지 않으므로 평년
2. 2012년: 100으로 나누어지지 않고 4로 나누어지므로 윤년
3. 2000년: 400으로 나누어지므로 윤년
4. 1900년: 100으로 나누어지나 400으로 나누어지지 않으므로 평년
*/

#include <stdio.h>

int isleapyear(int is_leap_year);

int main()
{
    int year;
    int month;
    int basic_m_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    int sum=0;
    int check=0;

    printf("출력할 년도와 달 입력 예) 2019 05 \n");
    printf("년도 : ");    scanf("%d",&year);
    printf("달 : ");      scanf("%d",&month);
    printf("\n%d년도 %d월 달력\n", year, month);

    if(isleapyear(year))
    {
        check = 1;
        basic_m_day[1]++;
    }
    else
    {
        check = 0;
    }

    sum = 365;
    int i;
    for(i=1;i<year;i++)
    {
        if(isleapyear(i))
            sum += 366;
        else
            sum += 365;        
    }
    for(i=0;i<month-1;i++)
    {
        sum += basic_m_day[i];
    }

    int week = sum % 7;

    printf("SUN\tMON\tTUS\tWED\tTHU\tFRI\tSAT\n");
    printf("---------------------------------------------------\n");

    int j;
    for(j=0;j<week;j++) {
        printf("\t");
    }

    for(i=1;i<=basic_m_day[month-1];i++) 
    {
        printf("%d\t", i);
        if(week==6)
        {
            week = -1;
            printf("\n");
        }
        week++;
    }
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
        
    return 0;
}

int isleapyear(int is_leap_year)
{
    if( ( (is_leap_year % 100 != 0) && (is_leap_year % 4 == 0) ) || (is_leap_year % 400 == 0) )
        return 1;
    else
        return 0;    
}