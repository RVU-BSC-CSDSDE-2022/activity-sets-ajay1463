#include <stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main(){
  int a = input();
  int b = input();
  int sum;
  add (a,b,&sum);
  output(a,b,sum);
}

int input(){
  int x;
  printf("Enter the number\n");
  scanf("%d", &x);
  return(x);
}

void add(int a, int b,int *sum)
{
  *sum=a+b;
}

void output(int a,int b, int sum){
  printf("The sum of %d and %d is %d\n",a,b,sum)