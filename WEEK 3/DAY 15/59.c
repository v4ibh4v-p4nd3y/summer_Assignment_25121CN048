//Program to Rotate array right
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
    //Shifting the array to right
    for(i=0;i<n;i++){
            b[i+1]=a[i];  
    }
    //The last element of the original array becomes the first element of the shifted array
    b[0]=a[n-1];
    //Printing the shifted array
    printf("The shifted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}