#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;      
    
    printf("the sum of number1 and number2 is:%d + %d = %d", number1, number2, sum);
    return 0;
}
