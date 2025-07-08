#include <stdio.h>

void sortArray(int arr[], int size);

int main() {
    int data[6] = {4, 6, 2, 1, 9, 12};

    sortArray(data, 6);  // Sort the array

    // Print the sorted array
    printf("Sorted array: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }

    printf("\n");
}

void sortArray(int arr[], int size) {
    int i, j, temp;

    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
