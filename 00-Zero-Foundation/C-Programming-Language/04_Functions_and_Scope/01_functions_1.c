#include <stdio.h>

void disp_lines(int);
int fact(int);

void main(void)
{
    int z;

    printf("Hello World!!\n");
    disp_lines(3);
    z = fact(4);
    printf("%d\n", z);
    printf("Hello World!!\n");
    disp_lines(6);
    printf("Hello World!! fact(4) = %d\n", fact(4));
    disp_lines(9);
}

void disp_lines(int n)
{
    int i;

    for (i=1; i<=n; i++)
        printf("-------------\n");
}

int fact(int n)
{
    int f = 1;
    int i;

    for (i=n; i>0; i--)
        f = f*i;

    return f;
}
