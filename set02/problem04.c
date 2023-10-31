#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[]){
    printf("Enter number:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[n]);
    }
}
int is_composite(int n, int a[]) {
    if (a[n] <= 1){
        return 0;
    }  
    for (int i = 2; i <= a[n]/ 2; i++) {
        if (a[n]% i == 0) {
            return 1; 
        }
    }
    return 0;  
}int sum_composite_numbers(int n, int a[]){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(n, a[i])==1) {
            sum += a[i];
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
    sum=sum_composite_numbers(n, a);
    output(sum);
    return 0;
}