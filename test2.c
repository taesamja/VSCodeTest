// ������ - ������ �̿��Ͽ� ���װ� ���ϱ�

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char color[3][10];
    int digit[3];

    printf("\n----------------------------------------\n\n");
    printf("����:0, ����:1, ����:2, ��Ȳ:3, ���:4\n");
    printf("�ʷ�:5, �Ķ�:6, ����:7, ȸ��:8, ���:9\n");
    printf("������� ���� 3���� �Է��ϼ���.\n");
    printf("\n----------------------------------------\n\n");

    printf("digit[0] : ");    scanf("%s", color[0]);
    printf("digit[1] : ");    scanf("%s", color[1]);
    printf("digit[2] : ");    scanf("%s", color[2]);
    printf("\n");

    int i;
    for(i=0;i<3;i++)
        printf("%s ",color[i]);

    if(strcmp(color[0],"����")==0) digit[0]=0;
    if(strcmp(color[0],"����")==0) digit[0]=1;
    if(strcmp(color[0],"����")==0) digit[0]=2;
    if(strcmp(color[0],"��Ȳ")==0) digit[0]=3;
    if(strcmp(color[0],"���")==0) digit[0]=4;
    if(strcmp(color[0],"�ʷ�")==0) digit[0]=5;
    if(strcmp(color[0],"�Ķ�")==0) digit[0]=6;
    if(strcmp(color[0],"����")==0) digit[0]=7;
    if(strcmp(color[0],"ȸ��")==0) digit[0]=8;
    if(strcmp(color[0],"���")==0) digit[0]=9;

    if(strcmp(color[1],"����")==0) digit[1]=0;
    if(strcmp(color[1],"����")==0) digit[1]=1;
    if(strcmp(color[1],"����")==0) digit[1]=2;
    if(strcmp(color[1],"��Ȳ")==0) digit[1]=3;
    if(strcmp(color[1],"���")==0) digit[1]=4;
    if(strcmp(color[1],"�ʷ�")==0) digit[1]=5;
    if(strcmp(color[1],"�Ķ�")==0) digit[1]=6;
    if(strcmp(color[1],"����")==0) digit[1]=7;
    if(strcmp(color[1],"ȸ��")==0) digit[1]=8;
    if(strcmp(color[1],"���")==0) digit[1]=9;

    if(strcmp(color[2],"����")==0) digit[2]=0;
    if(strcmp(color[2],"����")==0) digit[2]=1;
    if(strcmp(color[2],"����")==0) digit[2]=2;
    if(strcmp(color[2],"��Ȳ")==0) digit[2]=3;
    if(strcmp(color[2],"���")==0) digit[2]=4;
    if(strcmp(color[2],"�ʷ�")==0) digit[2]=5;
    if(strcmp(color[2],"�Ķ�")==0) digit[2]=6;
    if(strcmp(color[2],"����")==0) digit[2]=7;
    if(strcmp(color[2],"ȸ��")==0) digit[2]=8;
    if(strcmp(color[2],"���")==0) digit[2]=9;
    
    int result;
    result = (10*digit[0]+1*digit[1])*pow(10,digit[2]);
    printf("\n");
    printf("����� %d %d %d �� ���� ��ȯ�� ���װ��� %d[��]�̴�.\n\n", digit[0], digit[1], digit[2], result);

    return 0;
}