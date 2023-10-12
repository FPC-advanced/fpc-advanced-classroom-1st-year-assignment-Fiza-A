//2. Write a C program to add two numbers.
#include<stdio.h>
int main(){

    int a, b;

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter first number:");
    scanf("%d",&b);


    int sum;
    sum=a+b;

    printf("sum of %d and %d is %d", a, b, sum);

    return 0;
}
