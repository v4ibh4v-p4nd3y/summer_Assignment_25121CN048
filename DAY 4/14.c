//program to find the nth term of the Fibonacci series 
#include <stdio.h>
int main() {
  int n,i,a=0,b=1,c;
  printf("Enter the term number: ");
  scanf("%d", &n);
  for(i=0;i<n;i++) {
    if(i<=1)
      c=i;
    else {
      c=a+b;
      a=b;
      b=c;
    }
  }
  printf("The %d term of the Fibonacci series is: %d\n", n, c);
  return 0;
}