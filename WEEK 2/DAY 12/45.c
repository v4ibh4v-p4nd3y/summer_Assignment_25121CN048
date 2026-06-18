//Program to write a function for palindrome 
#include <stdio.h>
// Function to check if a number is a palindrome
int palindrome(int a){
    int rem,sum=0,temp,i,j;
    temp=a;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==a){
        printf("The given number is a palindrome ");
    }
    else{
        printf("The given number is not a palindrome");
    }
    return 0;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    palindrome(n);// calling the function
    return 0;
}