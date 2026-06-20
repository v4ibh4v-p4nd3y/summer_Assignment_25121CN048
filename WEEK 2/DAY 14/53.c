// Program to Linear search
#include <stdio.h>
int main(){
    int n,i,t,r=0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    //enter array elements
    for(i=0;i<n;i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //target
    printf("Enter element to search : ");
    scanf("%d", &t);
    //linear search 
    for(i=0;i<n;i++){
        if(a[i]==t){
            r=i;
            break;
        }
    }
    if(r!=0){
        printf("Element found at index : %d", r);
    }
    else{
        printf("Element not found ");
    }
    return 0;
}