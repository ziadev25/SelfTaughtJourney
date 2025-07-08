#include <stdio.h>

void main(void)
{
    int x;
    int y;
    int z, b;

    x=24;
    y=26;

    x++;
    --y;

    z=x++;
    b=--y;

    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",x, z);
    printf("b = %d\n",y, b);
}
