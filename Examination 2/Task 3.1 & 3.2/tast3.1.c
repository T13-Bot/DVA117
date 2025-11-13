#include <stdio.h>

int main(void){

    float numbers;
    float sum = 0;
    float largest = 0;
    float smallest = 0;
    int count = 0;

    
    
    printf("Welcome\n");
    printf("Enter a negativ number for results.\n");

    do
    {
        printf("Enter a number: ");
        scanf("%f", &numbers);
    } while (numbers >= 0);

    

    return 0;
}   