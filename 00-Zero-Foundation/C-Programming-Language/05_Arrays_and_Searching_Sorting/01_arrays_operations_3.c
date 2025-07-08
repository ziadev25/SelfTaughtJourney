#include <stdio.h>
#define MAXSIZE  20

int main(void) {

    int data[MAXSIZE];
    int n;
    int i;
    int newVal;
    int delVal;
    int pos;

    printf("> Please size of array less than 20: ");
    scanf("%d", &n);
    if (n >= MAXSIZE){
        printf(">> Array size exceeds limit!!\n");
        return 0;
    }

    printf("\n");

    for(i = 0; i < n; i++) {

        printf("Value [%d]: ",i + 1);
        scanf("%d", &data[i]);
    }

    printf("\n-----------------------------\n\n");

    printf("> Please enter element to insert: ");
    scanf("%d", &newVal);

    printf("> Please enter position: ");
    scanf("%d", &pos);
    printf("\n");

    // Algorithm to insert a new item in array in specific position:

    if (n >= MAXSIZE - 1) {
    printf(">> Not enough space to insert new element!!\n");
    return 0;
    }

    if(pos > n || pos < 0){
        printf(">> Your position value wrong!!\n");
        return 0;
    }

    for(i = n; i > pos; i--){

        data[i] = data [i - 1];
    }

    data[pos] = newVal;

    n = n + 1;

    for(i = 0; i < n; i++) {
        printf("Value [%d]: %d\n", i + 1, data[i]);
    }

    printf("\n-----------------------------\n\n");

    printf("> Please enter element to delete: ");
    scanf("%d", &delVal);

    printf("> Please enter position: ");
    scanf("%d", &pos);
    printf("\n");

    // Algorithm to delete element from array in specific position:

    if (n >= MAXSIZE - 1) {
    printf(">> Not enough space to insert new element!!\n");
    return 0;
    }

    if(pos > n || pos < 0){
        printf(">> Your position value wrong!!\n");
        return 0;
    }

    for(i = pos; i < n - 1; i++){

        data[i] = data [i + 1];
    }

    n = n - 1;

    for(i = 0; i < n; i++) {
        printf("Value [%d]: %d\n", i + 1, data[i]);
    }

}
