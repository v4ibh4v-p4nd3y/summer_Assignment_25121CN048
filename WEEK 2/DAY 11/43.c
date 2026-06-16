//Program to write a function to check prime number
#include <stdio.h>
// Function to check if a number is prime
int prime(int a){
    int i,isprime=1;
    for(i=2;i*i<=a;i++){
        if(a%i==0){
            isprime=0;
            a=a/i;
        }
        else{
            isprime=1;
        }
    }
    if(isprime==1){
        printf("Given number is a prime number.");
    }
    else{
        printf("Given number is not a prime number.");
    }
    return 0;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    prime(n); // Function call
    return 0;
}