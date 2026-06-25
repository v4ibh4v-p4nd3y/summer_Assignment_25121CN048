//Program to Create voting eligibility system
#include <stdio.h>
void main() {
    int age;
    //prompt user to enter age
    printf("Enter your age: ");
    scanf("%d",&age);
    //check the voting eligibility based on age
    if(age>=18) {
        printf("You are eligible to vote.\n");
    }
    //check if age is less than 18 but non-negative
    else if(age>=0){
        printf("You are not eligible to vote.\n");
        printf("You can vote after %d year(s).\n",18-age);
    }
    else{
        printf("Invalid age entered.\n");
    }
}