#include <stdio.h>

void main(void)
{

    int ziad, res;

    ziad = 25;

    res = (ziad<20)&&(ziad>25);
    printf("res = %d\n",res);

    res = (ziad==25)||(ziad>20);
    printf("res = %d",res);

}
