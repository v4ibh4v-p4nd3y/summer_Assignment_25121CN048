//Program to reverse a number
#include <stdio.h>
void main() {
    int a, b = 0, c, n;

    printf("Enter the number you want to reverse: ");
    scanf("%d", &n);

    while(n != 0) {
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }

    printf("The reverse of the number is %d", b);
}