//Program to Count even and odd elements
#include <stdio.h>
int main(){
    int n,i,ceven=0,codd=0;
    printf("Enter number of elements of array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){            //for inserting array element
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //counting odd and even 
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            ceven++;//incrementing even count
        }
        else{
            codd++;//incrementing odd count
        }
    }
    printf("Even elements are : %d\n", ceven);
    printf("Odd elements are : %d\n", codd);
    return 0;
}