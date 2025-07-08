#include <stdio.h>
#define MAX 5
typedef unsigned char BYTE;

void main(void)
{
    int number, newnumber;
    int num1=12, num2=13;
    float avg;
    const int SIZE=25;
    BYTE bb=225;

    number=num1+num2+MAX+SIZE;
    newnumber=0b0101;
    avg=(num1+num2+newnumber)/2;

    printf("%d\n",number);
    printf("%d\n",newnumber);
    printf("avg = %f\n",avg);
    printf("%d",bb);
}
