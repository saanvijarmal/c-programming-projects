#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int sum = a+b;
    printf("Sum of %d and %d is: ", a,b);
    printf("%d",sum);
    int product = a*b;
    printf("\nProduct of %d and %d is: ", a,b);
    printf("%d", product);
    int difference = a-b;
    printf("\nDifference of %d and %d is: ", a,b);
    printf("%d", difference);
    float quotient =(float)a/b;
    printf("\nQuotient of %d and %d is: ", a,b);
    printf("%f", quotient);
    return 0;
}