#include <stdio.h>
#include <string.h>

typedef struct info{
    int code;
    char full_name[30];
    float salary;
}person;

void incorrect_increment(person x){
    x.code++;
}

void correct_increment(person *x){
    x->code++;
}


void main(void) {
    person person_1 = {33, "Ziad Ahrbil", 2500.99};
    person person_2 = {43, "Anas Samkra", 4000.00};
    person person_3;
    person *ptr;

    printf("List of agents:\n");
    printf("---------------\n\n");

    ptr = &person_1;
    printf("Person Number 1:\n");
    incorrect_increment(person_1);
    printf("Full Name: %s\nCode: %d\nSalary: %.2f\n\n", ptr->full_name, ptr->code, ptr->salary);

    ptr = &person_2;
    printf("Person Number 2:\n");
    correct_increment(&person_2);
    printf("Full Name: %s\nCode: %d\nSalary: %.2f\n\n", ptr->full_name, ptr->code, ptr->salary);

    person_3 = person_2;
    ptr = &person_3;
    (*ptr).code = 15;
    strcpy((*ptr).full_name, "Inas Zahiri");
    printf("Person Number 3:\n");
    printf("Full Name: %s\nCode: %d\nSalary: %.2f\n\n", ptr->full_name, ptr->code, ptr->salary);
}
