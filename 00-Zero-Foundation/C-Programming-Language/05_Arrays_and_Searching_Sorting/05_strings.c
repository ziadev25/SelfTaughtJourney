#include <stdio.h>
#include <string.h>

// Custom string length function
int str_len(char a[]);

// Palindrome checker function
int palind(char a[]);

void main(void) {

    // String declarations
    char name[30];                      // User input
    char name1[5];                      // Will hold "Ziad"
    char name2[] = {'A', 'h', 'r', 'b', 'i', 'l', '\0'}; // Manually null-terminated string

    // String copy (copying a literal to name1)
    strcpy(name1, "Ziad");

    // Input from user
    printf("Please enter your name: ");

    // Safe input method (fgets). Replace with gets(name) if you're required to.
    fgets(name, sizeof(name), stdin);

    // Remove newline character added by fgets (optional for clean output)
    name[strcspn(name, "\n")] = 0;

    // Output the input name and greetings
    printf("\nYour full name is: %s\n\n", name);
    printf("Welcome %s to big tech company...\n\n", name);

    // String concatenation-like output
    printf("I mean %s %s\n\n", name1, name2);

    // Length using built-in strlen
    printf("Length of name2 is: %d\n\n", strlen(name2));

    // Length using your custom str_len
    int name1_leng = str_len(name1);
    printf("Length of name1 is: %d\n\n", name1_leng);

    // String comparison (lexicographically)
    if (strcmp(name1, name2) < 0){
        printf("name1 > name2");
    } else if (strcmp(name1, name2) > 0){
        printf("name1 < name2");
    } else {
        printf("name1 = name2");
    }

    // Palindrome check using custom function
    int name1_palind = palind(name1);
    printf("\n\nThe name1 is: %d\n(if 1 = It's a palindrome / if 0 = It's Not a palindrome)...\n\n", name1_palind);
}

// Custom implementation of strlen()
int str_len(char a[]){
    int i = 0;
    while (a[i] != '\0') i++;
    return i;
}

// Check if string is a palindrome
int palind(char a[]){
    int j = str_len(a) - 1;
    int i = 0;
    while (i < j) {
        if (a[i] != a[j]) {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }
    return 1; // It's a palindrome
}
