//Program to find duplicate elements in an array
#include <stdio.h>
int main(){
    int n,i,j,e=0,duplicate=0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    //enter array elements
    for(i=0;i<n;i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //checking for duplicates
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                e=a[i];
                duplicate=1;
                break;
            }
        }
    }
    if(duplicate==0){
        printf("Duplicate not found");
    }
    else{
        printf("%d is the duplicate element of the array ", e);
    }
    return 0;
}    