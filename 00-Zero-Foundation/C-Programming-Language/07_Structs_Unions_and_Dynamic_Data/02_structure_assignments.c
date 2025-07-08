#include <stdio.h>

struct person {
    int code;
    char name[30];
    float salary;
};
struct person person1 = {1, "Youssef", 2000.00};
struct person person2 = {2, "Yassine", 3000.00};
struct person person3;

void main(void){
    printf("LIst of Agents\n");
    printf("---------------\n\n");

    printf("Person 1 Information:\n");
    printf("Code: %d\nName: %s\nSalary: %0.2f\n", person1.code, person1.name, person1.salary);
    printf("\nPerson 2 Information:\n");
    printf("Code: %d\nName: %s\nSalary: %0.2f\n", person2.code, person2.name, person2.salary);

    person3 = person2;
    person3.code = 3;
    printf("\nPerson 3 Information:\n");
    printf("Code: %d\nName: %s\nSalary: %0.2f\n", person3.code, person3.name, person3.salary);
}
