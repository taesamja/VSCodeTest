// ����15 : [����7-8] ���ڿ� ����ϱ�

#include <stdio.h>

int main()
{
    int i;
    char str[4] = {'A', 'B', 'C', '\0'};
    char student[] = "John";

    printf("���ڿ��� ���ÿ� ����ϴ� ���\n");
    printf("�л��� �̸��� %s�̴�. \n\n", student);
    printf("���ڿ��� �� ���ھ� ����ϴ� ��� \n");

    for(i=0; str[i] != '\0'; i++)
        printf("%c\n", str[i]);

    return 0;
}
