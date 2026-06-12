//Program to print multiplication table of a given number 
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (b = 1; b <= 10; b++) {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    return 0;
}