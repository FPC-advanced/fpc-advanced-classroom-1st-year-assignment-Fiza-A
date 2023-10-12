#include<stdio.h>
int input(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    return a;
}
int addint(int a, int b){
    int sum=0;
    sum=a+b;
    return sum;
}
void output(int a, int b, int sum){
    printf("Sum of %d and %d is %d",a, b, sum);
}
int main(){
    int a, b, sum;
    a=input();
    b=input();
    sum=addint(a, b);
    output(a, b, sum);
    return 0;
}