#include <stdio.h>

int main(void)
{
    float final_grade;

    printf ("\nType your final grade please: ");
    scanf("%f", &final_grade);

    if ((final_grade > 18) && (final_grade <= 20))
        printf("\nGreat Job\n");
    else if ((final_grade > 15) && (final_grade <= 18))
        printf("\nGood Job\n");
    else if ((final_grade > 12) && (final_grade <= 15))
        printf("\nQuite Good\n");
    else if ((final_grade > 10) && (final_grade <= 12))
        printf("\nAcceptable\n");
    else if (final_grade < 10)
        printf("\nNeeds Improvement\n");

    return (0);
}
