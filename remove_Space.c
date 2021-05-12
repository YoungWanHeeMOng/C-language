
#include <stdio.h>

void RemoveEndSpace(char* buf);

int main()
{
    char buf[256]="";
    int i=0;
    printf("문자열 입력 : ");
    scanf_s("%[^\n]", buf, sizeof(buf));

    RemoveEndSpace( buf);
 
    printf("[%s]\n", buf);


    return 0;

}

void RemoveEndSpace(char* buf)
{
    int i=0;
    while (buf[i])
    {
        i++;
    }
    i--;
    while (buf[i] == ' ')
    {
        buf[i] = '\0';
        i--;
    }

}