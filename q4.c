#include <stdio.h>

float toKelvin(float celsius) {
    float kelvin = celsius + 273.15f;
    printf("Temperature in Kelvin: %.4f\n", kelvin);
    return kelvin;
}

int main(void) {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    toKelvin(c);
    return 0;
}

