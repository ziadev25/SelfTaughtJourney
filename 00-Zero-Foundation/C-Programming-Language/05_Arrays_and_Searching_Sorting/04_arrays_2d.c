#include <stdio.h>

#define ROWS 3
#define COLS 3
#define rows 3
#define cols 3

void main(void) {

    int a[ROWS][COLS];
    int b[rows][cols];
    int n, i, j;

    // Example number one:

    n = sizeof(a) / sizeof(a[0]);

    printf("\n\n**************************************\n\n");

    printf("\n >> 2D array a size entering values: %d\n", n);
    printf(" -------------------------------------\n\n");

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            printf("Please enter value of a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n >> 2D array a size organize values: %d\n", n);
    printf(" -------------------------------------\n\n");

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n**************************************\n\n");
    printf("\n\n**************************************\n\n");

    // Example number two:

    printf("\n >> Enter values for a %dx%d 2D array:\n", rows, cols);
    printf(" -------------------------------------\n\n");

    for(i = 0; i < rows; i++){
        printf("Enter values for row %d (ex: 1 2 3): ", i + 1);
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n >> Displaying the 2D array values:\n");
    printf(" -------------------------------------\n\n");

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n**************************************\n\n");
}
