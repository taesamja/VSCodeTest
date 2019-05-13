// ������ - BMI ���� �����ϱ�
/*
�������Ʈ
1. http://www.marathon.pe.kr/diet/bmi_cal.html
2. http://www.foodsafetykorea.go.kr/portal/healthyfoodlife/bmiCalcurator.do?menu_no=3071&menu_grp=MENU_NEW03
3. https://blog.naver.com/jjman003/221370359845

ü��������(BMI:Body Mass Index) - ������ ����� ü���� �̿��Ͽ� ������ ���� �����ϴ� ����.
������ => BMI = ü��[Kg] / (Ű[m] x Ű[m])
------------------------
BMI         : ü�߻���
------------------------
18.5 �̸�    : �� ü��
18.5 - 22.9  : ����
23.0 - 24.9  : �� ü��
25.0 - 29.9  : �浵 ��
30.0 - 39.9  : ������ ��
40.0 �̻�    : �� ��
------------------------
*/
#include <stdio.h>

int main()
{
    float bmi, weight, height;

    printf("Ű �Է�(cm) :  ");    scanf("%f", &height);
    printf("������ �Է�(kg) : "); scanf("%f", &weight);
    
    bmi = weight / (height*0.01*height*0.01);
    printf("bmi���� = %.2f\n", bmi);

    if(bmi < 18.5) 
        printf("��ü��\n");
    else if(bmi >= 18.5 && bmi <= 22.9 ) 
        printf("����\n");
    else if(bmi >= 23.0 && bmi <= 24.9 ) 
        printf("��ü��\n");
    else if(bmi >= 25.0 && bmi <= 29.9 ) 
        printf("�浵 ��\n");
    else if(bmi >= 30.0 && bmi <= 39.9) 
        printf("������ ��\n");
    else  
        printf("�� ��\n");

    return 0;
}