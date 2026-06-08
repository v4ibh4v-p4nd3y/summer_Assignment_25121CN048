// Program to find factorial using recursion
#include <stdio.h>
int fact(int n)
{
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("%d", fact(a));
}