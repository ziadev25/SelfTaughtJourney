#include <stdio.h>

void main(void){

    int data[100];
    int size, i;
    int mid, low, upp;
    int pos = -1, value;

    printf("Please Enter A Size Less Than 100: ");
    scanf("%d", &size);

    printf("\n");

    for(i = 0; i < size; i++){
        printf("Value of data [%d] is: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("Please Enter A Value You Search on: ");
    scanf("%d", &value);

    printf("\n");

    low = 0;
    upp = size - 1;

    do{
        mid = (low + upp) / 2;

        if(value == data[mid]){
            pos = mid + 1;
            break;
        } else if (value > data[mid]){
            low = mid + 1;
        } else {
            upp = mid - 1;
        }
    }while(low <= upp);

    if(pos == -1){
        printf("\nThis value %d not located in this array!!\n\n", value);
    } else {
        printf("%d is located at position [%d]\n\n", value, pos);
    }
}
