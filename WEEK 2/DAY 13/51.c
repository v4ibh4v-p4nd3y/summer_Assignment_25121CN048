//Program to Find largest and smallest element
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int a[n];
    //for input array elements
    for(i=0;i<n;i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //for searching large and smallest element
    int largest = a[0]; 
    int smallest = a[0];
    for(i = 0; i < n; i++) {
        if(a[i] < smallest) {
            smallest = a[i];
        }
        if(a[i] > largest) {
            largest = a[i];
        }
    }
    printf("Smallest element : %d\n", smallest);
    printf("Largest element : %d\n", largest);
    return 0;
}
