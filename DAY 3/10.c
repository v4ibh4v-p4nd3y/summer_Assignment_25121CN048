//Program to print prime numbers in a given range
#include <stdio.h>

void main() {
    int i, j, n, m, c;

    printf("Enter the lower limit: ");
    scanf("%d", &n);
    printf("Enter the upper limit: ");
    scanf("%d", &m);

    printf("Prime numbers between %d and %d are: ", n, m);
    for (i = n; i <= m; i++) {
        c = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                c++;
            }
        }
        if (c == 2) {
            printf("%d ", i);
        }
    }
}