#include <stdio.h>

int checkRowIndex(int size, int a[size][size], int row);
int checkColIndex(int size, int a[size][size], int col);
int checkDiagonal(int size, int a[size][size], char diagonal); // Use char for 'L' or 'R'
int checkMagic(int size, int a[size][size]);

int main(void) {
    int n;

    printf("Enter size of magic > ");
    scanf("%d", &n);
    printf("\n");

    int magic[n][n]; // VLA

    // Input matrix
    for (int i = 0; i < n; i++) {
        printf("Data for Row [%d] > ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &magic[i][j]);
        }
        printf("\n");
    }

    int row = 1, col = 1, diaL, diaR;

    for (int i = 0; i < n; i++) {
        if (!checkRowIndex(n, magic, i)) {
            row = 0;
        }
        if (!checkColIndex(n, magic, i)) {
            col = 0;
        }
    }

    diaL = checkDiagonal(n, magic, 'L');
    diaR = checkDiagonal(n, magic, 'R');

    printf("Rows: %d\n", row);
    printf("Cols: %d\n", col);
    printf("Diagonal Left to Right: %d\n", diaL);
    printf("Diagonal Right to Left: %d\n", diaR);

    if (checkMagic(n, magic) == 0)
        printf("No, It's not a Magic\n");
    else
        printf("Yes, It's a Magic\n");

    return 0;
}

int checkRowIndex(int size, int a[size][size], int row) {
    int sum = size * (size * size + 1) / 2;
    int sum_r = 0;

    for (int col = 0; col < size; col++) {
        sum_r += a[row][col];
    }

    return (sum_r == sum);
}

int checkColIndex(int size, int a[size][size], int col) {
    int sum = size * (size * size + 1) / 2;
    int sum_c = 0;

    for (int row = 0; row < size; row++) {
        sum_c += a[row][col];
    }

    return (sum_c == sum);
}

int checkDiagonal(int size, int a[size][size], char diagonal) {
    int sum = size * (size * size + 1) / 2;
    int sum_d = 0;

    // Other Way !!!!!! -------------------------------------

    /*

    if (diagonal == 'L' || diagonal == 'l') {
        for (int i = 0; i < size; i++) {
            sum_d += a[i][i];
        }
    } else if (diagonal == 'R' || diagonal == 'r') {
        for (int i = 0; i < size; i++) {
            sum_d += a[i][size - 1 - i];
        }
    } else {
        return 0;
    }

    return (sum_d == sum);

    */
    //-------------------------------------------------------

    switch (diagonal) {

        case 'L':
        case 'l':
            for (int i = 0; i < size; i++) {
                sum_d += a[i][i];
            }
            break;

        case 'R':
        case 'r':
            for (int i = 0; i < size; i++) {
                sum_d += a[i][size - 1 - i];
            }
            break;

        default:

            return 0;
    }

    return (sum_d == sum);
}

int checkMagic(int size, int a[size][size]) {
    int magic = 1;

    for (int row = 0; row < size; row++) {
        if (!checkRowIndex(size, a, row)) {
            printf("Row %d is Not A Magic\n", row + 1);
            magic = 0;
        }
    }

    for (int col = 0; col < size; col++) {
        if (!checkColIndex(size, a, col)) {
            printf("Col %d is Not A Magic\n", col + 1);
            magic = 0;
        }
    }

    if (!checkDiagonal(size, a, 'L')) {
        printf("Diagonal L is Not A Magic\n");
        magic = 0;
    }

    if (!checkDiagonal(size, a, 'R')) {
        printf("Diagonal R is Not A Magic\n");
        magic = 0;
    }

    return magic;
}
