
// 순차 정렬 Sequential Sort
#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))
#define SWAP(i, j) {int t; t=i; i=j; j=t;}

#include <Windows.h>
enum COLOR
{
    LACK,BLUE, GREEN, JADE, RED, PURPLE, YELLOW, WHITE,GRAY,
    LIGHT_BLUE, LIGHT_GREEN, LIGHT_JADE, LIGHT_RED,LIGHT_PURPLE, LIGHT_YELLOW,LIGHT_WHITE
};

void gotoxy(int x, int y)
{
    COORD Pos={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}
void changecolor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void ViewArr2(int* base,int i, int j, int n, int r)
{
    int s = 0;

    for (s = 0; s < n; s++)
    {
        if (s < i)
        {
            changecolor(PURPLE);
        }
        else if(s == i)
        {
            changecolor(RED);
        }
        else if (s < j)
        {
            changecolor(WHITE);
        }
        else if (s == j)
        {
            changecolor(GREEN);
        }
        else
        {
            changecolor(WHITE);
        }
        printf("%2d ", base[s]);
    }
    changecolor(WHITE);
    if (r)
    {
        printf(" SWAP %d %d", base[i], base[j]);
    }
    printf("\n");
}
void ViewArr(int* base, int n, const char* msg)
{
    int i=0;

    for (i = 0; i < n; i++)
    {
        printf("%2d ", base[i]);
    }
    puts(msg);
}

void SequenceSort2(int* base, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (base[i] > base[j])
            {
                ViewArr2(base,i,j,n,1);
                SWAP(base[i], base[j]);
            }
            ViewArr2(base, i, j, n, 0);
            Sleep(1000);
        }
       
    }
}
void SequenceSort(int* base, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (base[i] > base[j])
            {
                SWAP(base[i], base[j]);
            }
        }
        int k = 0;

        for (k = 0; k < n; k++)
        {
            printf("%2d ", base[k]);
        }
        printf("\n");
    }
}

int main(void)
{
    int arr[10]={9,4,3,0,5,8,7,6,2,1};
    ViewArr(arr,LENGTH(arr),"before");
    getch();
    /*SequenceSort(arr,LENGTH(arr));*/
    SequenceSort2(arr, LENGTH(arr));
    ViewArr(arr, LENGTH(arr),"after");




    //system("pause");
    return 0;
}
