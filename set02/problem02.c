#include<stdio.h>
int input_side(){
    int n;
    printf("Enter the length of the side:\n");
    scanf("%d",&n);
    return n;
}
int check_scalene(int a, int b, int c){
    if(a!=b && b!=c && a!=c){
        return 1;
    }
    else{
        return 0;
    }
}
void output(int a, int b, int c, int isscalene){
    printf("The sides od the given triangle are %d, %d, %d\n",a, b,c);
    if(isscalene){
        printf("the triangle is scalene");
    }
    else{
        printf("the triangle is not scalene");
    }
}
int main(){
    int a, b, c, isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a, b, c);
    output(a, b, c, isscalene);
    return 0;
}