#include <stdio.h>
#include <string.h>

typedef struct info{
    int code;
    char name[30];
    float salary;
}person;

person get_data(void){
    person temp;

    printf("Please your Code: ");
    scanf("%d", &temp.code);
    while(getchar() != '\n' && getchar() != EOF);

    printf("Please your Name: ");
    fgets(temp.name, sizeof(temp.name), stdin);
    temp.name[strcspn(temp.name, "\n")] = 0;
    while(getchar() != '\n' && getchar() != EOF);

    printf("Please your Salary: ");
    scanf("%f", &temp.salary);
    while(getchar() != '\n' && getchar() != EOF);

    return temp;
}

void print_info(person y){
    printf("\n\n*********************\n");

    printf("Person Information:\n");
    printf("Code is > %d\n", y.code);
    printf("Name is > %s\n", y.name);
    printf("Salary is > %.2f\n", y.salary);
}

void main(void){
    person person_1, person_2, person_3;

    printf("List of Agents:\n");
    printf("---------------\n\n");

    printf("Please Enter Information:\n");
    person_1 = get_data();

    printf("\nPlease Enter Information:\n");
    person_2 = get_data();

    printf("\nPlease Enter Information:\n");
    person_3 = get_data();

    print_info(person_1);
    print_info(person_2);
    print_info(person_3);
}
