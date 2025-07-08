#include <stdio.h>

void main(void)
{

    int num1=8;

    int res, res1;

    char ch1='Z';
    char ch2='I';
    char ch3='A';
    char ch4='D';

    char nch1=~ch1;
    char nch2=~ch2;
    char nch3=~ch3;
    char nch4=~ch4;


    res = num1>>1;
    res1 = num1<<1;

    printf("%d\n",res);
    printf("%d\n",res1);

    printf("%C%C%C%C\n",ch1, ch2, ch3, ch4);
    printf("%C%C%C%C\n",nch1, nch2, nch3, nch4);


}
