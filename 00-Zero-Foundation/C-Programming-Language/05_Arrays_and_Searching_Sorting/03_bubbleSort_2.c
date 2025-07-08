#include <stdio.h>
#include <stdbool.h>

int sorted_arr(int a[], int size);

void main() {
    int arr[6] = {4, 6, 2, 1, 9, 12};
    int num[6] = {3, 0, 22, 122, 93, 132};
    int i;
    bool sorted;

    printf(">> B-Sorted array: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    do {

        sorted = true;
        for(i = 0; i < 6 - 1; i++) {
            if(arr[i] > arr[i + 1]) {

            int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = false;
            }
        }

        printf("Pass: ");
        for (int k = 0; k < 6; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");

    } while (!sorted);

    printf("\n");
    printf(">> A-Sorted array: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    int func_bub = sorted_arr(num, 6);
    printf("%d ", func_bub);

    printf("\n\n");
}


int sorted_arr(int a[], int size){

    bool sorted_func;

    do {
        sorted_func = true;
        for(int i = 0; i < 6 - 1; i++) {
            if(a[i] > a[i + 1]) {
            int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                sorted_func = false;
            }
        }
    } while (!sorted_func);

    printf("\n");
    printf(">> F-Sorted array: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
}











