#include <math.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    double num, result;
    printf("Enter a number: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("Square root = %.2lf\n", result);
    return 0;
}
