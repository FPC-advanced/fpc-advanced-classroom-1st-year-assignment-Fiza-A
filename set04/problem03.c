/* Write a program to find the `nCr` of given n and r

***Function Declarations***
```c
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);*/

#include <stdio.h>
void input_n_and_r(int *n, int *r) {
    printf("Enter the values of n and r:\n");
    scanf("%d %d", n, r);
}
int factorial() {
    int num;
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
int nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0; 
    }
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}
void output(int n, int r, int result) {
    printf("%dC%d (combination of %d choose %d) is: %d\n", n, r, n, r, result);
}
int main() {
    int n, r;
    input_n_and_r(&n, &r);
    int result = nCr(n, r);
    output(n, r, result);
    return 0;
}
