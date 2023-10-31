#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    printf("Enter number:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[n]);
    }
}
int sum_composite_numbers(int n, int a[n]){
    int sum=0;
    for(int i=0; i<n; i++){
        if(a[i]%i==0){
            sum+=a[i];
        }
        else{
            return sum;
        }
    }
    return sum;
}
void output(int sum){
    printf("Sum of the composite numbers is %d",sum);
}
int main(){
    int n, sum;
    n=input_array_size();
    int a[n];
    input_array(n, a);
    output(sum);
    return 0;
}