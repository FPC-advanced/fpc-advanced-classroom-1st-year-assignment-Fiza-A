#include<stdio.h>
#include<math.h>
float input_n(){
    float n;
    printf("Enter a number:\n");
    scanf("%f",&n);
    return n;
}
float find_sqrt(float n, float epsilon){
    float x=n;
    epsilon=0.0001;
    float x_next;
    while(1){
        x_next=0.5*(x + n/ x); 
        if(fabs(x-x_next)<epsilon)
            break;
        x = x_next;
    }
    return x_next;
}
void output(float n, float res){
    printf("sqrt of %f is %f",n,res);
}
int main(){
    float n, epsilon, res;
    n=input_n();
    res=find_sqrt(n, epsilon);
    output(n, res);
    return 0;
}