//Program to calculate tax

#include <stdio.h>

int main(void){
    float price;
    float tax;
    float total;
    float vat;
    float tax2;

    printf("Price of article (including VAT): ");
    scanf("%f", &price);

    printf("Enter VAT: ");
    scanf("%f", &tax);

    vat = tax / 100 + 1;
    total = price / (1 + tax / 100);
    tax2 = price - total;

    printf("The price excluding VAT is: %.2f\n", total);
    printf("The VAT is: %.2f", tax2);

    return 0;
}