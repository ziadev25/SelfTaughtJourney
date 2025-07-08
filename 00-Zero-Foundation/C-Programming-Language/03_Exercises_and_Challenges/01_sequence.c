#include <stdio.h>
#include <math.h>  // Added for sqrt()

#define PI 3.14159265358979323846f  // Better precision

int main(void)  // Standard declaration
{
    int a, b, c, n;
    float r, s, product, x, y, z;


    // --- Square Area ---
    printf("\n Enter value of [a]: ");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Error: Square side must be positive!\n");
        return 1;
    }
    printf("\n The area of square is = %d\n", a * a);

    // --- Rectangle Area ---
    printf("\n Enter value of [b]: ");
    scanf("%d", &b);
    printf("\n Enter value of [c]: ");
    scanf("%d", &c);
    if (b <= 0 || c <= 0) {
        printf("Error: Rectangle sides must be positive!\n");
        return 1;
    }
    printf("\n The area of rectangle is = %d\n", b * c);

    // --- Circle Area ---
    printf("\n Enter value of [r]: ");
    scanf("%f", &r);
    if (r <= 0) {
        printf("Error: Radius must be positive!\n");
        return 1;
    }
    printf("\n The area of circle is = %7.2f\n", PI * r * r);

    // --- Triangle Area ---
    printf("\n Enter value of [x]: ");
    scanf("%f", &x);
    printf("\n Enter value of [y]: ");
    scanf("%f", &y);
    printf("\n Enter value of [z]: ");
    scanf("%f", &z);
    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Error: Triangle sides must be positive!\n");
        return 1;
    }

    s = (x + y + z) / 2.0f;
    printf("\n The value of s is = %7.2f\n", s);

    product = s * (s - x) * (s - y) * (s - z);

    if (product >= 0) {
        printf("\n The area of triangle is = %7.2f\n", sqrt(product));
    } else {
        printf("\n Error: The sides do not form a valid triangle\n");
    }

    // --- The Odd Or Even---
    printf("\n Enter value of [n]: ");
    scanf("%d", &n);

    // printf("\n The n = %d is %s\n", n , ((n%2) == 0)? "even" : "odd"); - 'Other Way'

    if ( n % 2 == 0) {
        printf("\n The number is EVEN\n");
    } else {
        printf("\n The number is ODD\n");
    }

    return 0;  // Required for int main()
}
