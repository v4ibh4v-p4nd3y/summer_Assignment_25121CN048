//Program to Find first non-repeating character
#include <stdio.h>
#include <string.h>
void main() {
    char str[100];
    int i, j, flag;
    printf("Enter a string: ");
    gets(str);
    // Find first non-repeating character
    for(i = 0; str[i] != '\0'; i++) {
        flag = 0;
        for(j = 0; str[j] != '\0'; j++) {
            //Check if character is repeating
            if(str[i] == str[j] && i != j) {
                flag = 1;
                break;
            }
        }
        // If character is not repeating, print it and return
        if(flag == 0) {
            printf("First non-repeating character is: %c\n", str[i]);
            return;
        }
    }
    printf("No non-repeating character found.\n");
}