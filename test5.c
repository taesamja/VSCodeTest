// 수행평가 - 홀수 마방진 만들기
/*
마방진의 정의 : 1부터 n*n까지의 연속된 자연수를 가로, 세로, 대각선의 합이 같아지도록 정사각형 모양으로 배열한 것

마방진 만드는 규칙
<참고사이트>
1. https://thrillfighter.tistory.com/218?category=399367
2. https://evebox.tistory.com/18?category=627460

<규칙>
1. (첫 번째 행, 가운데 열) 위치에서 '1'부터 시작한다.
2. 현재 위치에서 우상(대각선 오른쪽 위) 방향으로 진행하며 1씩 증가하는 값을 넣는다.
   {이동 방향 : 행은 감소하는 방향, 열은 증가(또는 감소)하는 방향.}
3. 이동 중 행렬의 범위를 벗어날 경우,
   - 행이 벗어난 경우, 행을 마지막 행으로 옮김.
   - 열이 벗어난 경우, 열을 처음 행으로 옮김.
4. 다른 수에 막히는 경우 다음 행부터 시작한다.
*/

#include <stdio.h>

int main()
{
    int row, col, N;
    int Matrix[30][30];

    while(1)
    {
        printf("홀수 마방진 차수를 입력하세요. <예> 차수 입력 : 3 => 의미 : 3차 마방진\n");
        printf("차수 입력 : ");
        scanf("%d", &N);

        if(N % 2 == 0) printf("\n잘못 입력하셨습니다. 다시 입력하세요.\n\n");
        else break;
    }
    
    row = 1, col = (N+1) /2;

    int i;
    for(i=1;i<=N*N; i++)
    {
        Matrix[row][col] = i;

        if(i%N == 0)
        {
            row++;
        }
        else
        {
            row--;
            col++;
            if(row == 0) row = N;
            if(col == N+1) col = 1;
        }        
    }

    for(i=1;i<=N;i++)
    {   
        int j;
        for(j=1;j<=N;j++)
            printf("%4d",Matrix[i][j]);
        
        printf("\n");
    }

    return 0;
}