/* Write a program to check if the given number is prime

**Function Declarations**
c
int input_number();
int is_prime(int n);
void output(int n, int result);
*/

#include<stdio.h>
int input_number(){
    int n;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    return n;
}
int is_prime(int n){
    if(n<=1){
        printf("Number should be greater than 1!");
        return 1;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void output(int n ,int result){
    if(result==1){
        printf("%d is a prime number\n",n);
    }
    else if(result==0){
        printf("%d is not a prime number\n",n);
    }
}
int main(){
    int n, result;
    n=input_number();
    result=is_prime(n);
    output(n,result);
    return 0;
}