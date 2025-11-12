#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

    int number1;
    int number2;

    printf("Enter a number: ");
    scanf("%d", &number1);
    printf("Enter another number: ");
    scanf("%d", &number2);

    printf("The total value of your numbers is: %d\n", number1 + number2);
}