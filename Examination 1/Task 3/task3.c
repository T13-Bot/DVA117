//Program to calculate tax

#include <stdio.h>

int main(void){
    float price = 0;
    float tax = 0;
    float total = 0;
    float vat = 0;

    printf("Price of article (including VAT): ");
    scanf("%f", &price);

    printf("Enter VAT: %%");
    scanf("%f", &tax);

    tax / 100;
    tax + 1;
    

    printf("%f", tax);


    printf("The price of the product is %f\n", price);
    printf("The VAT of the product is: %% %f\n", tax);
    printf("Price excluding VAT is: %f", total);
    printf("The VAT is: ", vat);

    return 0;
}