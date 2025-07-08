#include <stdio.h>
#include <windows.h>

int main(void) {

    int row, col, value;
    int size;

    printf("Enter size in odd: ");
    scanf("%d", &size);

    int magic[size + 1][size + 1]; // Because there is no -- in Array!!!

    row = 1;
    col = (size + 1) / 2;
    value = 1;

    do {

        magic[row][col] = value;

        if(value % size == 0) row++;
        else {
            row--;
            col--;
        }

        if(row < 1) row = size;
        if(col < 1) col = size;

        value++;

    } while(value <= size * size);

    printf("\n\n");

    for(row = 1; row <= size; row++){
        for(col = 1; col <= size; col++){
            printf("%3d", magic[row][col]);
        }
        printf("\n");
    }
}


int checkRow(int size, int a[size][size], int row) {




}

int checkCol(int size, int a[size][size], int col) {




}

int checkDiagonal(int size, int a[size][size], int row) {




}

































