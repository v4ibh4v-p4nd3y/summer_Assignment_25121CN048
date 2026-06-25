//Program to Create number guessing game
#include <stdio.h>
void main() {
    int lo=1,hi=100;
    char resp;//variable to store user response
    //loop until the number is found
    while(lo<=hi){
        int mid=(lo+hi)/2;
        printf("Is it %d? (h/l/c): ",mid);
        scanf(" %c", &resp);
        //check the user response
        if(resp=='c'){
            printf("Found it!\n");
            break;
        }
        else if(resp=='l'){
            hi=mid-1;
        }
        else if(resp=='h'){
            lo=mid+1;
        }
    }
}