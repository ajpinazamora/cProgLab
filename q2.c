#include <stdio.h>
#define DISCOUNT_RATE 0.10

int main(void) {
    double price, discount, finalPrice;
    printf("Enter original price: ");
    scanf("%lf", &price);

    discount = price * DISCOUNT_RATE;
    finalPrice = price - discount;

    printf("Discount amount: $%.2lf\n", discount);
    printf("Final price after discount: $%.2lf\n", finalPrice);
    return 0;
}

