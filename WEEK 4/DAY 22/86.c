//Write a program to Count words in a sentence.
#include <stdio.h>
void main() {
    char str[200];
    int i, w = 1;// Start with 1 to count the last word
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    // Count words
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            w++;
    }
    printf("Number of words = %d\n", w);
}