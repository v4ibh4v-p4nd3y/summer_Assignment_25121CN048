//Program to print character pyramid
#include <stdio.h>
void main(){
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        char ch='A';
        //print spaces
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        //print ascending characters from A to A+i-1
        for(j=1;j<=i;j++)
        {
            printf("%c ", ch);
            ch++;
        }
        //print descending characters from A+i-2 to A
        ch=ch-2; // Reset ch to the last printed character before descending
        for(j=i-1;j>=1;j--)
        {
            printf("%c ", ch);
            ch--;
        }   
        printf("\n");
    }
}