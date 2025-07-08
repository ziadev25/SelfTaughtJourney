#include <stdio.h>

void main(void){

    int data[100];
    int n, key, pos = -1;
    int i;

    printf("Please size of data less than 100: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter value of [%d]: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\n\n-------------------------------------\n\n");

    printf("Please enter key value you search on: ");
    scanf("%d", &key);

    // search for key in array:

    for(i = 0; i < n; i++){
        if(data[i] == key){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        printf("\n%d is not located in any position!!\n", key);
    }
    else {
        printf("\n%d is located at position %d\n", key, pos + 1);
    }
}
