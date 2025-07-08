#include <stdio.h>

void main(void)
{
    int age, salary;

    age = 25;
    salary = 9999;

    printf("Is my age equal to 26 ? %d\n", age == 26);
    printf("Is my age equal to 25 ? %d\n", age == 25);

    printf("Is my salary great than 5000 ? %d\n", salary > 5000 );
    printf("Is my salary less than 9999 ? %d\n", salary < 9999);
}
