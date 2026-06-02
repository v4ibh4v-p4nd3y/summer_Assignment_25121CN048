//Program to check whether a number is palindrome or not

#include <stdio.h>
void main()
{
    int a, b=0, n, t=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    if (t == b)
        printf("%d is a palindrome number.", t);
    else
        printf("%d is not a palindrome number.", t);
}