// ������ - �ڹ��� Ǯ��(��й�ȣ ���߱�)

#include <stdio.h>

int main()
{
    char password[20] = "smart";
    char in_pass[20];
    int cmp;
    
    //printf("%s\n", password);

    while(1) 
    {
        printf("��ȣ�� �Է��ϼ���.(��ȣ�� ���� 5������ ��:start)\n");
        scanf("%s", in_pass);
        
        cmp = strcmp(password,in_pass);
        
        printf("%d\n", cmp);
        if(cmp == 0)
        {
            printf("��й�ȣ ����\n");
            //printf("password=%s\n",password);
            printf("in_pass=%s\n",in_pass);
            break;
        }
        else
        {
            printf("��й�ȣ Ʋ��\n");
            //printf("password=%s\n",password);
            printf("in_pass=%s\n",in_pass);  
            printf("\n");    
        }
    }
    
    return 0;
}