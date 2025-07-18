#include <stdio.h>
#include <string.h>

void main(void){

    struct person
    {
        int code;
        char name[30];
        float salary;
    };
    struct person person1, person2 = {200, "Ziad", 1000.00};
    person1.code = 100;
    strcpy(person1.name, "Ahmed");
    person1.salary = 2000.00;

    printf("Person 1 Information:\n\n");
    printf("Name: %s\nCode: %d\nSalary: %0.2f\n", person1.name, person1.code, person1.salary);
    printf("------------------------------------\n");
    printf("Person 2 Information:\n\n");
    printf("Name: %s\nCode: %d\nSalary: %0.2f\n", person2.name, person2.code, person2.salary);
}
