//Program to find product of digits of a number
#include <stdio.h>

void main(){

    int a, b=1, n;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n!=0){

        a = n%10;
        b=b*a;
        n /= 10;
    }

    printf("Product of digits is: %d", b);
}