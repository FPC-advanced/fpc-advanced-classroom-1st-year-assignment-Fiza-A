#include<stdio.h>
int input(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    return a;
}
int compare(int a, int b, int c){
    int large=a;
    if(b>a){
        large=b;
    }
    if(c>a){
        large=c;
    }
    return large;
}
void output(int a, int b, int c, int large){
    printf("largest number is %d",large);
}
int main(){
    int a, b, c;
    a=input();
    b=input();
    c=input();
    int large;
    large=compare(a, b, c);
    output(a,b,c,large);
    return 0;
}
