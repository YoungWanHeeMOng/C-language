
//정삼각형 출력
#include <stdio.h>

int main()
{
    int n=0;
    int i=0, j=0;
    int line=0, space=0, star=0;

    printf("출력할 라인수 : ");

    scanf_s ("%d", &n ); // n: <- 출력할 라인 수 입력
    // 사각형
    for (i=0; i <n; i++)// 반복(i:0->n)
    {
        for(j=0; j <n; j++) //반복(j: 0->n)
        {
            putchar('*');// '*'출력
        }
       putchar('\n');// 개행 
    }
    putchar('\n');// 개행 

    // 삼각형
    for (line = 0; line< n; line++)// 반복(i:0->n)
    {
        for (space= 0; space < (n-line); space++) //반복(j: 0->n)
        {
            putchar(' ');// '*'출력
        }
        for (star = 0; star < (2*line+1); star++) //반복(j: 0->n)
        {
            putchar('*');// '*'출력
        }
        putchar('\n');// 개행 
    }
    putchar('\n');// 개행 

    // 역삼각형
    for (line = 0; line < n; line++)// 반복(i:0->n)
    {
        for (space = 0; space < line; space++) //반복(j: 0->n)
        {
            putchar(' ');// '*'출력
        }
        for (star = 0; star < (2 *(n- line) - 1); star++) //반복(j: 0->n)
        {
            putchar('*');// '*'출력
        }
        putchar('\n');// 개행 
    }
    putchar('\n');// 개행 

    // 다이아몬드
    for (line = 0; line < n; line++)// 반복(i:0->n)
    {
        for (space = 0; space <(n- line-1); space++) //반복(j: 0->n)
        {
            putchar(' ');// '*'출력
        }
        for (star = 0; star < ((2 * line)+1); star++) //반복(j: 0->n)
        {
            putchar('*');// '*'출력
        }
        putchar('\n');// 개행 
   
    }
    for (line = 0; line < n; line++)// 반복(i:0->n)
    {
        for (space = 0; space < line; space++) //반복(j: 0->n)
        {
            putchar(' ');// '*'출력
        }
        for (star = 0; star < (2 * (n - line) - 1); star++) //반복(j: 0->n)
        {
            putchar('*');// '*'출력
        }
        putchar('\n');// 개행 
    }
    putchar('\n');// 개행 



    return 0;
}