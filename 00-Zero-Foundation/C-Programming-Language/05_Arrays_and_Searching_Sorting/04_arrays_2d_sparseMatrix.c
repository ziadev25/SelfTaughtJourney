#include <stdio.h>

void main(void) {

    int row, col;
    int matrix[5][6] =
    {
        {0, 0, 0, 0, 9, 0},
        {0, 8, 0, 0, 0, 0},
        {4, 0, 0, 2, 0, 0},
        {0, 0, 0, 0, 9, 5},
        {0, 0, 2, 0, 0, 0}
    };

    int size = 0;
    for (row = 0; row < 5; row++){
        for (col = 0; col < 6; col++){
            if (matrix[row][col] != 0){
                size++;
            }
        }
    }
    printf("%3d\n\n", size);

    int spares[size][3];
    int k = 0;
    for (row = 0; row < 5; row++) {
        for (col = 0; col < 6; col++){
            if (matrix[row][col] != 0){
                spares[k][0] = row;
                spares[k][1] = col;
                spares[k][2] = matrix[row][col];
                k++;
            }
        }
    }
    printf("  R  C  V\n\n");
    for (row = 0; row < k; row++){
        for (col = 0; col < 3; col++){
            printf("%3d", spares[row][col]);
        }
        printf("\n");
    }

    printf("\n\nTriplet Representation: \n\n");
    int index = 0;
    for (row = 0; row < 5; row++){
        for (col = 0; col < 6; col++){
            if ((row == spares[index][0]) && (col == spares[index][1])){
                printf("%3d", spares[index][2]);
                index++;
            } else {
                printf("%3d", 0);
            }
        }
        printf("\n");
    }

}
