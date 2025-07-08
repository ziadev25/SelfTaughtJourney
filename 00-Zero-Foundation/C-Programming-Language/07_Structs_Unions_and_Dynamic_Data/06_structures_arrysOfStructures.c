#include <stdio.h>
#include <string.h>

typedef struct info{
    int code;
    char name[30];
    float salary;
}employee;

employee get_data(void){
    employee temp;

    printf("\tPlease your Code: ");
    scanf("%d", &temp.code);
    while(getchar() != '\n' && getchar() != EOF);

    printf("\tPlease your Name: ");
    fgets(temp.name, sizeof(temp.name), stdin);
    temp.name[strcspn(temp.name, "\n")] = 0;

    printf("\tPlease your Salary: ");
    scanf("%f", &temp.salary);
    while(getchar() != '\n' && getchar() != EOF);

    return temp;
}

void print_info(employee y){
    printf("Person Information:\n");
    printf("Code is > %d\n", y.code);
    printf("Name is > %s\n", y.name);
    printf("Salary is > %.2f\n", y.salary);
}

void main(void){
    employee data[100];

    int size;
    int i;

    printf("Please enter Size of Employee (Less Than 100): ");
    scanf("%d", &size);
    printf("\n");

    for(i = 0; i < size; i++){
        printf("Employee [%d]:\n", i + 1);
        data[i] = get_data();
        printf("\n---------------------------------\n");
    }

    float max = 0;
    employee max_empl;

    for(i = 0; i < size; i++){
        if(data[i].salary > max){
            max = data[i].salary;
            max_empl = data[i];
        }
    }

    int pre_code = 1000;
    employee pre_empl;

    for(i = 0; i < size; i++){
        if(data[i].code < pre_code){
            pre_code = data[i].code;
            pre_empl = data[i];
        }
    }

    printf("\nEmployee that has a highest Salary is:");
    printf("\n*************************************\n");
    print_info(max_empl);

    printf("\nEmployee that has a a Pre Code is:");
    printf("\n*********************************\n");
    print_info(pre_empl);

}

