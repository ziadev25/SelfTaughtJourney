#include <stdio.h>

void main(void){

    int x = 100;
    int *ptr1; // If you want pointer to be 0 not undefined do (ptr = NULL);
    int **ptr2;

    ptr1 = &x;
    ptr2 = &ptr1;

    printf("Value of x (*ptr1) = %d\n", *ptr1);
    printf("Adress of x (ptr1) = (%u) or (%p)\n", ptr1, ptr1);

    printf("\n");

    printf("Value of x (**ptr2) = %d\n", **ptr2);
    printf("Adress of x (ptr2)  = (%u) or (%p)\n", ptr2, ptr2);

    printf("\n -------------------- \n\n");

    {
        char *name = "ziad";
        char *temp = name;

        printf("%s\n", name);

        for (int i = 0; i < 5; i++ )
            printf("\n%c\n", *temp++);

        printf("%s\n", name);
        printf("%s\n", name);
        printf("%s\n", name);
    }

    printf("\n -------------------- \n\n");

    {
        int x = 300;
        int * const ptr = &x;

        *ptr = 500;
        printf("x = %d\n", x);

    }

    printf("\n -------------------- \n\n");

    {
        int x = 300;
        int y = 100;
        const int *ptr = &x;

        printf("x = %d\n", x);

        ptr = &y;
        printf("y = %d\n", y);
    }


}
