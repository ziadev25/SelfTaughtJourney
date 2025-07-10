#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

// array of pointer to structurer
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
    student *data[MAX_STUDENTS];
    int size, i, j, k;

    system("cls");
    printf("Please enter numbers of Students (Less than %d): ", MAX_STUDENTS);
    if (scanf("%d", &size) != 1){
        printf("Invalid input! Please enter a number!\n");
        exit(1);
    }
    if (size <= 0 || size > MAX_STUDENTS){
        printf("Invalid number of students! Please enter a number between [1] and [%d]!\n", MAX_STUDENTS);
        exit(1);
    }
    while(getchar() != '\n' && getchar() != EOF);
    printf("\n");

    for(i = 0; i < size; i++){
        data[i] = (student *) malloc(sizeof(student));
        if(!data[i]){
            printf("\nOut of memory! We can't allocate space for student [%d]!\n", i + 1);
            for(k = 0; k < i; k++){
                free(data[k]);
                data[k] = NULL;
            }
            exit(1);
        }

        printf("Student no [%d]: \n", i + 1);

        printf("\tName: ");
        fgets(data[i]->name, sizeof(data[i]->name), stdin);
        data[i]->name[strcspn(data[i]->name, "\n")] = 0;

        printf("\tClass: ");
        if(scanf("%d", &data[i]->class_) != 1){
            printf("Invalid class input for student [%d]! Please enter a number!", i + 1);
            for(k = 0; k <= i; k++){
                free(data[k]);
                data[k] = NULL;
            }
            exit(1);
        }
        while(getchar() != '\n' && getchar() != EOF);

        printf("\tAge: ");
        if(scanf("%d", &data[i]->age) != 1){
            printf("Invalid age input for student [%d]! Please enter a number!", i + 1);
            for(k = 0; k <= i; k++){
                free(data[k]);
                data[k] = NULL;
            }
            exit(1);
        }
        while(getchar() != '\n' && getchar() != EOF);
        printf("\n");
    }

    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; j++){
            if(data[i]->class_ > data[j]->class_){
                swap(data[i], data[j]);
            }
        }
    }

    printf("\nNo \t\tName \t\tClass \t\tAge\n");
    printf("-------------------------------------------------------\n");

    for(i = 0; i < size; i++){
        printf("%d \t\t%s \t\t%d \t\t%d\n", i + 1, data[i]->name, data[i]->class_, data[i]->age);
    }
}


