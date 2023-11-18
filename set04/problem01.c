/*1. Write a program to find sum of two fractions

***Function Declarations***
```c
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);*/
#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2){
    printf("Enter numertators and denominators of two fractions:\n");
    scanf("%d %d %d %d",num1,den1,num2,den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
    if(den1 == den2){
        *res_num = num1 + num2;
        *res_den = den1; 
    } else {
        *res_num = (num1 * den2) + (num2 * den1);
        *res_den = den1 * den2;
    }
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
    printf("Sum of the two fractions %d/%d and %d/%d is %d/%d",num1, den1,num2, den2, res_num, res_den);
}
int main(){
    int num1, den1, num2, den2, res_num, res_den;
    input(&num1, &den1, &num2, &den2);
    add(num1, den1, num2, den2, &res_num, &res_den);
    output(num1, den1, num2, den2, res_num, res_den);
    return 0;
}