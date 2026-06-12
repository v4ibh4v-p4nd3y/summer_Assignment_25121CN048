//Program to find lcm of two numbers
#include <stdio.h>  
void main()
 {
    int a, b, c=1, n, m, i, z=1;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    
    a=n;
    b=m;    

    if (n < m) {
       for (i = 1; i <= n; i++)
        {
            if (i % a == 0 && i % b == 0) {
                c = i;   
            }
        }
        z=a*b/c;
        printf("LCM of %d and %d is: %d", a, b, z);
    }
    else
    {
        for (i = 1; i <= m; i++)
        {
            if (i % a == 0 && i % b == 0) {
                c = i;
             }
        }
        z=a*b/c;
        printf("LCM of %d and %d is: %d", a, b, z);
    }
}