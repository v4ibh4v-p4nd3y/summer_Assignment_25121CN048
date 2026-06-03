//Program to check whether a number is prime or not
#include <stdio.h>
void main()
{
    int a=0,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a==2)
    {
        printf("The number %d is prime.", n);
    }
    else
    {
        printf("The number %d is not prime.", n);
    }
}