#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, determinant, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    determinant = b * b - 4 * a * c;

    if (determinant < 0) {
        printf("Determinant is negative. No real roots.\n");
    } else {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Root 1 = %.2lf\tRoot 2 = %.2lf\n", root1, root2);
    }
    return 0;
}

