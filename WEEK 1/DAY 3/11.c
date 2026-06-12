//Program to find gcd of two numbers
#include <stdio.h> 

void main()
 {
    int a, b, c=1, n, m, i;;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    
    a=n;
    b=m;    

    if (a < b) {
       for (i = 1; i <= n; i++)
        {
            if (a % i == 0 && b % i == 0) {
                c = i;
            }
        }
        printf("GCD of %d and %d is: %d", a, b, c);
    }
    else
    {
        for (i = 1; i <= m; i++)
        {
            if (a % i == 0 && b % i == 0) {
                c = i;
            }
        }
        printf("GCD of %d and %d is: %d", a, b, c);
    }
}