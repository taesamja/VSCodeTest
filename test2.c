// 수행평가 - 색깔을 이용하여 저항값 구하기

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char color[3][10];
    int digit[3];

    printf("\n----------------------------------------\n\n");
    printf("검정:0, 갈색:1, 빨강:2, 주황:3, 노랑:4\n");
    printf("초록:5, 파랑:6, 보라:7, 회색:8, 흰색:9\n");
    printf("순서대로 색깔 3개를 입력하세요.\n");
    printf("\n----------------------------------------\n\n");

    printf("digit[0] : ");    scanf("%s", color[0]);
    printf("digit[1] : ");    scanf("%s", color[1]);
    printf("digit[2] : ");    scanf("%s", color[2]);
    printf("\n");

    int i;
    for(i=0;i<3;i++)
        printf("%s ",color[i]);

    if(strcmp(color[0],"검정")==0) digit[0]=0;
    if(strcmp(color[0],"갈색")==0) digit[0]=1;
    if(strcmp(color[0],"빨강")==0) digit[0]=2;
    if(strcmp(color[0],"주황")==0) digit[0]=3;
    if(strcmp(color[0],"노랑")==0) digit[0]=4;
    if(strcmp(color[0],"초록")==0) digit[0]=5;
    if(strcmp(color[0],"파랑")==0) digit[0]=6;
    if(strcmp(color[0],"보라")==0) digit[0]=7;
    if(strcmp(color[0],"회색")==0) digit[0]=8;
    if(strcmp(color[0],"흰색")==0) digit[0]=9;

    if(strcmp(color[1],"검정")==0) digit[1]=0;
    if(strcmp(color[1],"갈색")==0) digit[1]=1;
    if(strcmp(color[1],"빨강")==0) digit[1]=2;
    if(strcmp(color[1],"주황")==0) digit[1]=3;
    if(strcmp(color[1],"노랑")==0) digit[1]=4;
    if(strcmp(color[1],"초록")==0) digit[1]=5;
    if(strcmp(color[1],"파랑")==0) digit[1]=6;
    if(strcmp(color[1],"보라")==0) digit[1]=7;
    if(strcmp(color[1],"회색")==0) digit[1]=8;
    if(strcmp(color[1],"흰색")==0) digit[1]=9;

    if(strcmp(color[2],"검정")==0) digit[2]=0;
    if(strcmp(color[2],"갈색")==0) digit[2]=1;
    if(strcmp(color[2],"빨강")==0) digit[2]=2;
    if(strcmp(color[2],"주황")==0) digit[2]=3;
    if(strcmp(color[2],"노랑")==0) digit[2]=4;
    if(strcmp(color[2],"초록")==0) digit[2]=5;
    if(strcmp(color[2],"파랑")==0) digit[2]=6;
    if(strcmp(color[2],"보라")==0) digit[2]=7;
    if(strcmp(color[2],"회색")==0) digit[2]=8;
    if(strcmp(color[2],"흰색")==0) digit[2]=9;
    
    int result;
    result = (10*digit[0]+1*digit[1])*pow(10,digit[2]);
    printf("\n");
    printf("색깔띠 %d %d %d 에 대한 변환된 저항값은 %d[Ω]이다.\n\n", digit[0], digit[1], digit[2], result);

    return 0;
}