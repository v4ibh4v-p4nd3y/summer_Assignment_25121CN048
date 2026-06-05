//Program to print factors of a number
#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("The factors of %d are ", n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);  //prints the factors of n
        }
    }
}