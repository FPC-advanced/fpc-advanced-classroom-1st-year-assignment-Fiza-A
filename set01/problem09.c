#include <stdio.h>
#include <math.h>
float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}
float square_root(float n) {
    if (n < 0) {
        printf("Cannot find the square root of a negative number.\n");
        return -1.0;
    }
    float x = n;
    float y = 1.0;
    float epsilon = 0.00001;
    while (fabs(x - y) > epsilon) {
        x = (x + y) / 2.0;
        y = n / x;
    }
    return x;
}
void output(float n, float sqrroot) {
    if (sqrroot != -1.0) {
        printf("The square root of %.2f is approximately %.4f\n", n, sqrroot);
    }
}
int main() {
    float number, result;
    number = input();
    result = square_root(number);
    output(number, result);
    return 0;
}