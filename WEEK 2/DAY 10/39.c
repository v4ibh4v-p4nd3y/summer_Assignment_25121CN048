//Program to print number pyramid
#include <stdio.h>
void main(){
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        //printing spaces
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        //printing ascending numbers from 1 to i
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        //printing descending numbers from i-1 to 1
        for(j=i-1;j>=1;j--)
        {
            printf("%d ",j);
        }   
        printf("\n");
    }
}