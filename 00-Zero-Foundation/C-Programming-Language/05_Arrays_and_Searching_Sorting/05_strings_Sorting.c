#include <stdio.h>
#include <string.h>

// Function prototype
void insertionSort(char arr[][25], int n);

void main(void) {

    int i, j, count;
    char names[100][25], temp[25];

    // Get number of strings from user
    printf("How many strings names you are going to enter? > ");
    scanf("%d", &count);

    fflush(stdin);  // Clear input buffer before using gets()

    // Input strings
    puts("\nPlease Strings one by one: \n");
    for(i = 0; i < count; i++) {
        printf("Please enter name[%d]: ", i + 1);
        gets(names[i]);  // Use fgets in modern code for safety
    }

    // === Classic Sort (Bubble or Selection Sort Style) ===
    for(i = 0; i < count - 1; i++) {
        for(j = i + 1; j < count; j++) {
            // Compare and swap if out of order (A-Z)
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Print sorted strings from classic method
    printf("\n\nOrder of sorted Strings (classic method): \n\n");
    for(i = 0; i < count; i++) {
        puts(names[i]);
    }

    printf("\n\n");

    // === Insertion Sort on the same list ===
    insertionSort(names, count);

    printf("Order of sorted Strings (insertionSort): \n\n");
    for(i = 0; i < count; i++) {
        puts(names[i]);
    }
}

// === Insertion Sort Function (A-Z) ===
void insertionSort(char arr[][25], int n) {

    int i, j;
    char key[25];

    for (i = 1; i < n; i++) {
        strcpy(key, arr[i]);  // Take current string
        j = i - 1;

        // Shift elements right if they are > key
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }

        // Insert key in correct position
        strcpy(arr[j + 1], key);
    }
}
