#include <stdio.h>

int main(void) {
    float a, b;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %.2f\n", a + b);
    printf("Product = %.3f\n", a * b);
    return 0;
}

