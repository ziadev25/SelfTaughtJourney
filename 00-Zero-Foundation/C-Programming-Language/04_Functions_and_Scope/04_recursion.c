#include <stdio.h>
int fact();
int Binary();void move(int n, char a, char c, char b);

void main() {

    int number1;
    int z;
    int n;
    char a = '1', b = '2', c = '3';

    printf("Please print number to get factorial: ");
    scanf("%d", &number1);

    z = fact(number1);
    printf("\nFactorial %d = %d\n", number1, z);

    printf("\n");

    Binary(z);
    printf("  It's a Binary number of %d\n", z);

    printf("\n");

    printf("Please number to Disk to move: ");
    scanf("%d", &n);
    move(n, a, c, b);
}

int fact(int n) {

    if (n == 0)
        return(1);
    else
        return(n * fact(n - 1));
}

int Binary(int x) {

    if ( x > 0) {
        Binary( x / 2 );
        printf("%d", x % 2);
    }
}

void move(int n, char a, char c, char b){

    if (n == 1)
        printf("Move Disk from %c to %c\n", a, c);
    else {
        move(n-1, a, b, c);
        printf("Move Disk from %c to %c\n", a, c);
        move(n-1, b, c, a);
    }
}
