//Program to write a function to find factorial
#include <stdio.h>
// Function to calculate factorial
int factorial(int a) {
    int i, fact = 1;
    for (i = a; i >= 1; i--) {
        fact = fact * i;
    }
    printf("factorial : %d", fact);
    return 0;
}
int main(){
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    factorial(a); // Function call
    return 0;
}