#include <stdio.h>
#include <stdlib.h>

// Linked List using queue

struct node{
    int data;
    struct node * link;
};

void main(void){

    struct node *front, *back, *ptr;
    int size, i;

    printf("Enter Size Here: ");
    scanf("%d", &size);

    front = NULL;
    for(i = 1; i <= size; i++){
        if(front == NULL){
            ptr = (struct node *) malloc(sizeof(struct node));
            front = ptr;
        }else {
            ptr->link = (struct node *) malloc(sizeof(struct node));
            ptr = ptr->link;
            back = ptr;
        }
        if(ptr != NULL){
            printf("Please value [%d]: ", i);
            scanf("%d", &ptr->data);
            ptr->link = NULL;
        }
    }

    printf("\nPrint queue using front in first time: ");
    ptr = front;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\nPrint queue using front in second time: ");
    ptr = front;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n\n");

    printf("Value of front is %d\n", front->data);
    printf("Value of back is %d\n", back->data);

}
