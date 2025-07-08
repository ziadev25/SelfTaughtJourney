#include <stdio.h>
#include <limits.h>
void main(void)
{

    char ch; /* -128 ... 127 (unsigned -> 0 ... 255) */
    long long int number;
    float salary;
    double distance;


    ch='Z';
    number=999;
    salary=9999.99;
    distance=999999999.999;

    printf("%c ; %d \n",ch,ch);
    printf("%c\n", ch - 1);
    printf("min value of int %d and max value %d\n",INT_MIN, INT_MAX);
    printf("size of long long int %d is bytes\n",sizeof(number));
    printf("%d\n",number);
    printf("%7.2f\n",salary);
    printf("%lf\n",distance);
}
