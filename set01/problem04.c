#include<stdio.h>
void input(int *a, int *b){
    printf("Enter two numbers:\n");
    scanf("%d %d",a, b);
}
void add(int a, int b, int *sum){
    *sum=0;
    *sum=a+b;
}
void output(int a, int b, int sum){
    printf("Sum of %d and %d is %d",a, b, sum);
}
int main(){
    int a, b;
    input(&a, &b);
    int sum;
    add(a,b,&sum);
    output(a, b, sum);
    return 0;
}