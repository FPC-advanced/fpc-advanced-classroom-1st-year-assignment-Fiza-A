#include <stdio.h>
struct _complex {
    float real, imaginary;
};
typedef struct _complex Complex;
int get_n() {
    int n;
    printf("Enter the number of complex numbers (n): ");
    scanf("%d", &n);
    return n;
}
Complex input_complex() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n]) {
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0}; // Initialize the sum to 0
    for (int i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}
void output(int n, Complex c[n], Complex result) {
    printf("Sum of %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("(%f + %fi) ", c[i].real, c[i].imaginary);
    }
    printf("= (%f + %fi)\n", result.real, result.imaginary);
}
int main() {
    int n;
    Complex result;
    n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    result = add_n_complex(n, c);
    output(n, c, result);
    return 0;
}