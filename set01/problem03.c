#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main(){
  
}

int input(){
  int a,b;
  printf("Enter two numbers : ");
  scanf("%d %d",&a,&b);
  return 0;
}

int add(int a, int b){
  int sum;
  sum=a+b;
  output(a,b,sum);
  return output;
}

void output(int a, int b, int sum){
  printf("The sum of %d and %d is %d",a,b,sum);
}