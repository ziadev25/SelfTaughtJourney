#include <stdio.h>

int global_var = 100;

void main(void) {

    auto int z;
    extern int global_var;

    printf("Global variable in main is = %d\n", global_var);
    printf("\n\n");
    myfunc();
    myfunc();
    printf("\n\n");
    myfunc1();
    myfunc1();
    printf("\n\n");
    myfunc2();
    myfunc2();
}

void myfunc(void) {

    static int x = 5;

    printf("Global variable in myfunc  = %d\n", global_var);
    printf("Local variable in myfunc   = %d\n", x++);
}

void myfunc1(void) {

    auto int y = 5;

    printf("Global variable in myfunc1 = %d\n", global_var);
    printf("Local variable in myfunc1  = %d\n", y++);
}

void myfunc2(void) {

    register int z = 5, i;

    printf("Global variable in myfunc2 = %d\n", global_var);
    printf("Local variable in myfunc2  = %d\n", z);

    for (i = 1; i <= 3; i++)
        printf("%d\n", i);
}
