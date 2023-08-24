//Write a function to add gst

#include <stdio.h>

float calculateTotalPrice(float initialPrice, float gstRate) {
    float gstAmount = (gstRate / 100) * initialPrice;
    float totalPrice = initialPrice + gstAmount;
    return totalPrice;
}

int main() {
    float initialPrice, gstRate;

    printf("Enter the initial price: ");
    scanf("%f", &initialPrice);

    printf("Enter the GST rate (in percentage): ");
    scanf("%f", &gstRate);

    float totalPrice = calculateTotalPrice(initialPrice, gstRate);

    printf("Total price including GST: %.2f\n", totalPrice);

    return 0;
}
