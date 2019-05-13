// 수행평가 - 야구게임

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int a[3];
  int b[3];

  int ball = 0;
  int strike = 0;
  int choice;  

  while(1) {

      srand((unsigned int)time(NULL));
      while(1) 
      {
        a[0] = rand() % 10;
        a[1] = rand() % 10;
        a[2] = rand() % 10;
        if(a[0]!=a[1] && a[1]!=a[2] && a[2]!=a[0])
          if(a[0]!=0 && a[1]!=0 && a[2]!=0) 
            break;
      }
      printf("정답 : %d %d %d\n", a[0], a[1], a[2]);
      printf("숫자 3개를 입력하세요. 예) 1 2 3 (123안됨)\n");
      printf("\nEnter three numbers : ");
      scanf("%d %d %d", &b[0], &b[1], &b[2]);

      while(1) {
        if(a[0] == b[0])
        {
          strike += 1;
        }
        else if(a[0] == b[1] || a[0] == b[2])
        {
          ball += 1;
        }

        if(a[1] == b[1])
        {
          strike += 1;
        }
        else if(a[1] == b[0] || a[1] == b[2])
        {
          ball += 1;
        }

        if(a[2] == b[2])
        {
          strike += 1;
        }
        else if(a[2] == b[1] || a[2] == b[1])
        {
          ball += 1;
        }

        if(strike == 3) {
          printf("\nThat's Right\n\n");
          strike = 0;
          break;
        }
        else if(strike >=1 && ball >= 1) {
          printf("\n%d ball  / %d strike\n", ball, strike);
          ball = 0; strike = 0;
        }
        else if(strike >=1 && ball == 0) {
          printf("\n%d strike\n", strike);
          strike = 0;
        }
        else if(strike == 0 && ball >= 1) {
          printf("\n%d ball\n", ball);
          ball = 0;
        }
        else {
          printf("\nOut\n");
        }

        printf("\nEnter three numbers : ");
        scanf("%d %d %d", &b[0], &b[1], &b[2]);
      }


    printf("야구게임 재시작 할까요? (OK:1입력, NO:2입력)\n");
    scanf("%d", &choice);
    
    if(choice != 1) break;
  }

  return 0;
}
