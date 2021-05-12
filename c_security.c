

#include <stdio.h>

int main()
{
    int pd=0x12345678;
    int key=0x2345873a;
    int sec=pd^key;
    int data=sec^key;

    printf("평문 : %#x\n",pd);
    printf("키 : %#x\n", key);
    printf("암호문 : %#x\n", sec);
    printf("복호문 : %#x\n", data);

    int num;
    printf("input number : ");
    scanf_s("%d", &num);
    printf("%#x\n", num);
    unsigned int cnum=0x8000000;
    int cnt=0;
    int check=0;
    while (cnum)
    {
        if (cnum & num)
           {
           check=1;
           printf("1");
           }
        else
        {
            if (check)
            {
            printf("0");
            }
        }
        cnum=cnum/2;
        cnt++;
        if (cnt % 4 ==0)
        {
            if (check)
            {
                printf(" ");
            }
        }
    }



    return 0;
}