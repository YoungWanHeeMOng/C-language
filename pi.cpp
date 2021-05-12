// 파이 계산

#include <stdio.h>

int main()
{
    long double  pi=0;
    long int k=0;

    while (k < 10000000000)
    {
        ++k;
        if (k % 2)
        {
            pi += 4.0/(2.0*k-1.0);
        }
        else
        {
            pi -= 4.0/(2.0*k-1.0);
        }
        //printf("%d %.30f\n", k,pi);
    }
    printf("%.30f\n", pi);

    getchar();
    return 0;
}