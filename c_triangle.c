
//���ﰢ�� ���
#include <stdio.h>

int main()
{
    int n=0;
    int i=0, j=0;
    int line=0, space=0, star=0;

    printf("����� ���μ� : ");

    scanf_s ("%d", &n ); // n: <- ����� ���� �� �Է�
    // �簢��
    for (i=0; i <n; i++)// �ݺ�(i:0->n)
    {
        for(j=0; j <n; j++) //�ݺ�(j: 0->n)
        {
            putchar('*');// '*'���
        }
       putchar('\n');// ���� 
    }
    putchar('\n');// ���� 

    // �ﰢ��
    for (line = 0; line< n; line++)// �ݺ�(i:0->n)
    {
        for (space= 0; space < (n-line); space++) //�ݺ�(j: 0->n)
        {
            putchar(' ');// '*'���
        }
        for (star = 0; star < (2*line+1); star++) //�ݺ�(j: 0->n)
        {
            putchar('*');// '*'���
        }
        putchar('\n');// ���� 
    }
    putchar('\n');// ���� 

    // ���ﰢ��
    for (line = 0; line < n; line++)// �ݺ�(i:0->n)
    {
        for (space = 0; space < line; space++) //�ݺ�(j: 0->n)
        {
            putchar(' ');// '*'���
        }
        for (star = 0; star < (2 *(n- line) - 1); star++) //�ݺ�(j: 0->n)
        {
            putchar('*');// '*'���
        }
        putchar('\n');// ���� 
    }
    putchar('\n');// ���� 

    // ���̾Ƹ��
    for (line = 0; line < n; line++)// �ݺ�(i:0->n)
    {
        for (space = 0; space <(n- line-1); space++) //�ݺ�(j: 0->n)
        {
            putchar(' ');// '*'���
        }
        for (star = 0; star < ((2 * line)+1); star++) //�ݺ�(j: 0->n)
        {
            putchar('*');// '*'���
        }
        putchar('\n');// ���� 
   
    }
    for (line = 0; line < n; line++)// �ݺ�(i:0->n)
    {
        for (space = 0; space < line; space++) //�ݺ�(j: 0->n)
        {
            putchar(' ');// '*'���
        }
        for (star = 0; star < (2 * (n - line) - 1); star++) //�ݺ�(j: 0->n)
        {
            putchar('*');// '*'���
        }
        putchar('\n');// ���� 
    }
    putchar('\n');// ���� 



    return 0;
}