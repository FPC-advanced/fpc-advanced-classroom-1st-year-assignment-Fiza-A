#include<stdio.h>
int input_number(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    return n;
}
int is_composite(int n){
    if(n<=1){
        printf("Number should be greater than 1!");
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 1;
        }
    }
    return -1;
}
void output(int n, int result){
    if(result){
        printf("The entered number is composite.");
    }
    else{
        printf("The entered number is not composite.");
    }
}
int main(){
    int n, result;
    n=input_number();
    result=is_composite(n);
    output(n, result);
    return 0;
}