//Program to find Frequency of an element
#include <stdio.h>
int main(){
    int i,j,n,ecount=0,target=0;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //count element
    printf("Enter element to count frequency : ");
    scanf("%d", &target);
    for(i=0;i<n;i++){
        if(a[i]==target){
            ecount++;//increment in frequency count
        }
    }
    printf("Frequency of the element : %d", ecount);//print frequency of the element
    return 0;
}