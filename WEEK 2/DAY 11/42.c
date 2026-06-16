//Program to write function to find maximum 
#include <stdio.h>
// Function to find the maximum of two numbers
int max(int a,int b){
    if(a>b){
        printf("Maximum : %d", a);
    }
    else{
        printf("Maximum : %d", b);
    }
    return 0;
}
int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    max(a,b); // Function call
    return 0;
}