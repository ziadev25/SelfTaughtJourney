#include <stdio.h>

void main(void) {

    int x = 25;

    int i = 25;
    float f = 25.5f;
    double d = 25.599;

    int *ptr;

    int *ptr_i;
    float *ptr_f;
    double *ptr_d;

    ptr = &x;

    ptr_i = &i;
    ptr_f = &f;
    ptr_d = &d;

    printf("First___________________________\n\n");

    printf("Value of x is: %d\n", *ptr);

    printf("Value of &x is: %u\n", &x);
    printf("Value of &x is: %p\n\n", ptr);

    *ptr += 50;
    printf("Value of x is: %d\n", x);

    printf("\n\nSecond___________________________\n\n");

    printf("i = %d and size of it is %d \n", *ptr_i, sizeof(ptr_i));
    printf("f = %f and size of it is %d\n", *ptr_f, sizeof(ptr_f));
    printf("d = %lf and size of it is %d\n", *ptr_d, sizeof(ptr_d));

}
