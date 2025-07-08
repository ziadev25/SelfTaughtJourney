#include <stdio.h>

void main(void) {

    int x = 25;

    int i = 25;
    float f = 25.5f;
    double d = 25.599;

    void *ptr;

    ptr = &f;
    printf("x = %0.2f\n", *((float *) ptr)); // casting !!!

    ptr = &x;
    printf("x = %d\n\n\n", *((int*) ptr));

    {
        short int y = 100; // short = 2 bytes...
        short int *ptr;

        ptr = &y;

        printf("y = %u\n", *ptr);
        printf("&y = %u\n", ptr);
        printf("\n");
        ptr++;
        printf("&y = %u\n", ptr);
        printf("y = %u (not y + 1)\n ", *ptr);
    }

    printf("\n--------------------------------\n");

    {
        int arr[] = {100, 200, 300, 400};
        int *ptr;

        ptr = &arr[1];

        printf("arr[1] = %u\n", *ptr);
        printf("&arr[1] = %u\n", ptr);
        printf("\n");
        ptr++;
        printf("&arr[1] = %u\n", ptr);
        printf("arr[1] = %u (Yes arr[1 + 1])\n ", *ptr);

        printf("\n\n");

        ptr = &arr[0];
        i = 0;

        while (i < 4) {
            printf("Value of (i = %d) = %d\n", i + 1, *ptr++); // increment *ptr
            i++;
        }

        printf("\n\n");

        for (i = 0; i < 4; i++){
            printf("Value of %d is = %d\n", i + 1, arr[i]);
        }
    }

    printf("\n--------------------------\n");

    {
        int arr[] = {100, 200, 300, 400, 500};
        int *ptr;
        int i;

        ptr = &arr[0];
        i = 0;

        while (i < 5) {
            printf("Value of (i = %d) = %d\n", i + 1, ++*ptr); // ++*ptr= increment value of *ptr!
            i++;
        }

        printf("\n\n");

        for (i = 0; i < 5; i++){
            printf("Value of %d is = %d\n", i + 1, arr[i]);
        }
    }


}
