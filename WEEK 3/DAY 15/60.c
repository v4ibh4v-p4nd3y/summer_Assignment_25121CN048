//Program to Move zeroes to end
#include <stdio.h>
void main(){
    int i,n,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Moving zeroes to end
    j=1;
    for(i=0;i<n;i++){
        if(a[i]==0){
            b[j]=a[i];
            j++;
        }
    }
    //The non-zero elements of the original array are moved to the front of the new array
    printf("The shorted array is:");
    for(i=0;i<n;i++){
        if(a[i]!=0){
            printf("%d ",a[i]);
        }
    }
    //The zeroes are moved to the end of the new array
     for(i=j;i<n;i++){
        b[i]=0;
        printf("%d ",b[i]);
      }
    }