//Program to Find first repeating character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    int i, j;
    int found = 0;
// Find first repeating character
    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            // Check if character is repeating
            if (str[i] == str[j]) {
                printf("First repeating character is: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        // If a repeating character is found, break the outer loop
       if (found == 1) {
            break;
        }
    }
// If no repeating character is found, print a message
    if (found != 1) {
        printf("No repeating character found.\n");
    }

    return 0;
}