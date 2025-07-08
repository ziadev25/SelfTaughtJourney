#include <stdio.h>

void main(void)
{

    int i1=3, i2=2;
    float f, f1;

    f = i1/i2;
    printf("\n\n%f\n\n",f);

    f1 = i1;
    f = f1/i2;
    printf("\n\n%f\n\n",f);

    f = i1/(float)i2;
    printf("\n\n%f\n\n",f);



}
