#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char name[30];
    int class_;
    int age;
}student;

void swap(student *a, student *b){
    student temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main(void){
    student data[10];
    int size, i, j;

    system("cls");
    printf("Please enter numbers of Students (Less than 10): ");
    scanf("%d", &size);
    while(getchar() != '\n' && getchar() != EOF);
    printf("\n");

    for(i = 0; i < size; i++){
        printf("Student no [%d]: \n", i + 1);

        printf("\tName: ");
        fgets(data[i].name, sizeof(data[i].name), stdin);
        data[i].name[strcspn(data[i].name, "\n")] = 0;

        printf("\tClass: ");
        scanf("%d", &data[i].class_);
        while(getchar() != '\n' && getchar() != EOF);

        printf("\tAge: ");
        scanf("%d", &data[i].age);
        while(getchar() != '\n' && getchar() != EOF);
        printf("\n");
    }

    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; j++){
            if(data[i].class_ > data[j].class_){
                swap(&data[i], &data[j]);
            }
        }
    }

    printf("\nNo \t\tName \t\tClass \t\tAge\n");
    printf("-------------------------------------------------------\n");

    for(i = 0; i < size; i++){
        printf("%d \t\t%s \t\t%d \t\t%d\n", i + 1, data[i].name, data[i].class_, data[i].age);
    }
}
