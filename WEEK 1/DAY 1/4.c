//Program to count digits in a given number
#include <stdio.h>

void main() {
    int n, a=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n == 0) {
        a = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            a++;
        }
    }
    
    printf("Number of digits: %d\n", a);
    
}