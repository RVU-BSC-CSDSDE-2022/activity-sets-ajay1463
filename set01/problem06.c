#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}
int input(){
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  return n;
}
void compare(int a, int b, int c, int *largest){
if(a>c && a>b)
  *largest=a;
else if(b>a && b>c)
  *largest=b;
else
  *largest=c;
} 
void output(int a, int b, int c, int largest){
  printf("Largest number is %d\n",a,b,c,largest);
}