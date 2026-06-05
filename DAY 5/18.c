//Program to check strong number
#include <stdio.h>
void main(){
    int n,a,c=0,x,i,b=1;
    printf("Enter the number ");
    scanf("%d",&n);
    x=n;
    while(n!=0){    //this loop calculates the sum of the factorial of the digits of n
        a=n%10;
        for(i=a;i>=1;i--){  //this loop calculates the factorial of the digit a
            b=b*i;
        }
        c=c+b;
        b=1;
        n=n/10;
    }
   //checks if the sum of the factorial of the digits is equal to the number itself or not
   (c==x)?printf("The number %d is strong", x):printf("The number %d is not strong", x);
}