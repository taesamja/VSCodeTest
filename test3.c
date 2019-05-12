// ������ - �޷� ����ϱ�
/*
������ �¾�¿��� 2�� 29���� �ִ� ���Դϴ�.
������ �����ֱ�� 365.2422���Դϴ�. ���� 1���� 365�Ϸθ� �ϸ� �� 4�⿡ �ѹ��� �Ϸ��� ������ �߻��ϹǷ� �̸� �����ϱ� ���� ������ ���Դϴ�. 
�� 2���� �Ϸ縦 �߰��� ������ 2���� ������ ���� ���� �����Դϴ�.

������ ���ϴ� ����� ������ �����ϴ�.
1. 100���� ���������� �ʰ� 4�� ���������� ����
2. 400���� ������ ���� �ش� ����
3. 100���� ������������ 400���� ���������� �ʴ� �ش� ���
* �߰�: ���� 3���� ������ ��� �������� �ʴ� �ش� ���

������ ���� ���� �˼� ���� ���Դϴ�.
1. 2005��: 4,100,400 ��� ���������� �����Ƿ� ���
2. 2012��: 100���� ���������� �ʰ� 4�� ���������Ƿ� ����
3. 2000��: 400���� ���������Ƿ� ����
4. 1900��: 100���� ���������� 400���� ���������� �����Ƿ� ���
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

    printf("����� �⵵�� �� �Է� ��) 2019 05 \n");
    printf("�⵵ : ");    scanf("%d",&year);
    printf("�� : ");      scanf("%d",&month);
    printf("\n%d�⵵ %d�� �޷�\n", year, month);

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