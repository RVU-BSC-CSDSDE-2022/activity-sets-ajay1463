#include <stdio.h>

int main(){
  int a, b, sum;
  printf("Enter a: ");
  scanf("%d",&a);

  printf("Enter b: ");
  scanf("%d",&b);

  sum= a+b;

  printf("Sum of a and b is %d+%d=%d",a,b,sum);
  return 0;
}