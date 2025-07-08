#include <stdio.h>
#include <string.h>
#include <math.h>

void main(void)
{

    int n, n1, ten, one;
    float a , b, c, x, f, f1, f2, X, X1, X2, d;
    float final_grade;
    const char *units[] = { "zero", "one", "two", "three", "four", "five", "six", "seven",
        "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy",
        "eighty", "ninety"};


    // Student Mark:

    printf ("\nType your final grade please: ");
    scanf("%f", &final_grade);

    if (final_grade < 10)
        printf("\nFail\n");
    else if (final_grade <= 12)
        printf("\nAcceptable\n");
    else if (final_grade <= 15)
        printf("\nGood\n");
    else if (final_grade <= 18)
        printf("\nVery Good\n");
    else
        printf("\nExcellent\n");



    // Convert numbers into text:

    printf("\nWrite an integer number please: ");
    scanf("%d", &n);

    if (n < 20) {
    printf("%s", units[n]);
    } else if (n % 10 == 0) {
    printf("\n%s", tens[n / 10]);
    } else {
    printf("\n%s-%s", tens[n / 10], units[n % 10]);
    }
    printf("\n");

    // basic way "Convert numbers into text":

    printf("\nWrite an integer number please: ");
    scanf("%d", &n1);

    if (n1 < 20)
    {
        switch (n1)
        {
        case 0:
            printf(""); break;
        case 1:
            printf("One"); break;
        case 2:
            printf("Two"); break;
        case 3:
            printf("Three"); break;
        case 4:
            printf("Four"); break;
        case 5:
            printf("Five"); break;
        case 6:
            printf("Six"); break;
        case 7:
            printf("Seven"); break;
        case 8:
            printf("Eight"); break;
        case 9:
            printf("Nine"); break;
        case 10:
            printf("Ten"); break;
        case 11:
            printf("Eleven"); break;
        case 12:
            printf("Twelve"); break;
        case 13:
            printf("Thirteen"); break;
        case 14:
            printf("Fourteen"); break;
        case 15:
            printf("Fifteen"); break;
        case 16:
            printf("Sixteen"); break;
        case 17:
            printf("Seventeen"); break;
        case 18:
            printf("Eighteen"); break;
        case 19:
            printf("Nineteen"); break;
        }
    }
    else
    {

        ten = n1 / 10;
        one = n1 % 10;

        switch (ten)
        {
        case 2:
            printf("\nTwenty"); break;
        case 3:
            printf("\nThirty"); break;
        case 4:
            printf("\nForty"); break;
        case 5:
            printf("\nFifty"); break;
        case 6:
            printf("\nSixty"); break;
        case 7:
            printf("\nSeventy"); break;
        case 8:
            printf("\nEighty"); break;
        case 9:
            printf("\nNinety"); break;
        }

        switch (one)
        {
        case 1:
            printf(" One"); break;
        case 2:
            printf(" Two"); break;
        case 3:
            printf(" Three"); break;
        case 4:
            printf(" Four"); break;
        case 5:
            printf(" Five"); break;
        case 6:
            printf(" Six"); break;
        case 7:
            printf(" Seven"); break;
        case 8:
            printf(" Eight"); break;
        case 9:
            printf(" Nine"); break;
        }
        printf("\n\n");
    }



    // Quadratic Equation:

    printf("\nValue of a: ");
    scanf("%f", &a);
    printf("\nValue of b: ");
    scanf("%f", &b);
    printf("\nValue of c: ");
    scanf("%f", &c);

    d = (b*b) - (4 * a * c);
    printf("\nLets calculate d: d is equal %0.2f \n", d);

    if (d < 0)
    {
        printf("\nThis Equation has no reel solution\n");

    } else if (d == 0)
    {
        printf ("\nThis Equation has one reel solution: ");

        X = -b  / (2 * a);
        printf(" X is equal %0.2f", X);

    } else if (d > 0)
    {
        printf("\nThis Equation has two reels solutions: ");

        X1 = (-b - sqrt(d)) / (2 * a);
        printf(" X1 is equal %0.2f", X1);

        X2 = (-b + sqrt(d)) / (2 * a);
        printf(" and X2 is equal %0.2f", X2);
    }

    printf("\n\n");
}
