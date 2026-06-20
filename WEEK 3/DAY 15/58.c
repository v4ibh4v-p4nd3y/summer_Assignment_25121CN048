//Program to Rotate array left
#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Shifting the array to left
    for(i=0;i<n;i++){
            b[i]=a[i+1];  
    }
    b[n-1]=a[0];
    //Printing the shifted array
    printf("The shifted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}