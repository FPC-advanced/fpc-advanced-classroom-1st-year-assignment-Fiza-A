#include <stdio.h>
struct complex {
    float real;
    float imaginary;
};
typedef struct complex Complex;
Complex input_complex() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum) {
    printf("Sum of complex numbers is %.2f + %.2fi\n",sum.real, sum.imaginary);
}
int main() {
    Complex complex1, complex2, sum;
    complex1 = input_complex();
    complex2 = input_complex();
    sum = add_complex(complex1, complex2);
    output(complex1, complex2, sum);
    return 0;
}