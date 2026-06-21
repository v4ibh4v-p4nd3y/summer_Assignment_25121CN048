//Write a program to Merge arrays.
#include <stdio.h>
int main(){
    int i,j,k,n,m;
    printf("enter no of elements of the first array : ");
    scanf("%d", &n);
    printf("enter no of elements of the second array : ");
    scanf("%d", &m);
    int a[n];
    int b[m];
    int c[n+m];
    //for entering first array
    printf("enter first array elements" "\n");
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //for entering second array
    printf("enter second array elements" "\n");
    for(i=0;i<m;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &b[i]);
    }
    //merging of the arrays
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0;i<m;i++){
        c[n+i]=b[i];
    }
    printf("merged array : ");
    //printing merged array
    for(i=0;i<n+m;i++){
        printf("%d ", c[i]);
    }
    return 0;
}