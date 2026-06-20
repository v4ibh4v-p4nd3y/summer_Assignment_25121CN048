//Program to reverse an array
#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    //Input elements in the array
    printf("Enter the elements of the array ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Reversing the array
    for(i=n-1;i>=0;i--){
        b[i]=a[n-1-i];        
    }
    //Printing the reversed array
    printf("The reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}