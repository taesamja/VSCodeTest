// 수행17 : [예제8-5] 소문자를 입력받아 대문자로 변환하기

#include <stdio.h>

void upper_case(char ch);

int main()
{
    char ch1;

    while( (ch1 = getchar()) != EOF )
    {
        upper_case(ch1);
    }

    return 0;
}

void upper_case(char ch)
{
    char res;

    if(ch >= 'a' && ch <= 'z')
        res = ch - 32;
    else
        res = ch;
    
    putchar(res);    
}
