#include <stdio.h>

void MyFunc(int);
int n3 = 400;

void main(void)
{
    int n0 = 100;

    printf("Local Variable n0  = %d\n", n0);

    {
        int n1 = 200;
        printf("Block Variable n1  = %d\n", n1);
        MyFunc(n0);
    }
}

void MyFunc(int i)
{
    int n2 = 300;
    printf("Local Variable n2  = %d\n", n2);
    printf("Global Variable n3 = %d\n", n3);
}
