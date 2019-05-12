// 수행평가 - 자물쇠 풀기(비밀번호 맞추기)

#include <stdio.h>

int main()
{
    char password[20] = "smart";
    char in_pass[20];
    int cmp;
    
    //printf("%s\n", password);

    while(1) 
    {
        printf("암호를 입력하세요.(암호는 영문 5글자임 예:start)\n");
        scanf("%s", in_pass);
        
        cmp = strcmp(password,in_pass);
        
        printf("%d\n", cmp);
        if(cmp == 0)
        {
            printf("비밀번호 해제\n");
            //printf("password=%s\n",password);
            printf("in_pass=%s\n",in_pass);
            break;
        }
        else
        {
            printf("비밀번호 틀림\n");
            //printf("password=%s\n",password);
            printf("in_pass=%s\n",in_pass);  
            printf("\n");    
        }
    }
    
    return 0;
}