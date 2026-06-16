//Program to write function to find the sum of two numbers
#include <stdio.h>
// Function to find the sum of two numbers
int sum(int a, int b) {
    int sum = 0;
    sum = a + b;
    printf("sum of the numbers : %d", sum);
    return 0;
}
int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    sum(a,b); // Function call
    return 0;
} 