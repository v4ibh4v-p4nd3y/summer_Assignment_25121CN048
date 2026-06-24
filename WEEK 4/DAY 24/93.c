//Program to Check string rotation
#include <stdio.h>
#include <string.h>
void main() {
    char str1[100],str2[100];
    int i,len;
    printf("Enter a string: ");
    fgets(str1,sizeof(str1),stdin);
    len=strlen(str1);
    // Remove the newline character if present
    if(str1[len-1]=='\n'){
        str1[len-1]='\0';
        len--;
    }
    // Rotate the string by moving the first character to the end
    for(i=0;i<len;i++){
        str2[i]=str1[len-1-i];
    }
    // Move the first character to the end
    str2[len-1]=str1[0];
    str2[len]='\0';
    printf("The rotated string: %s",str2);
}