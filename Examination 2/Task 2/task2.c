#include <stdio.h>

int main(void) {
    int nr;

    printf("Enter a number between 0-5: ");
    scanf("%d", &nr);
    
    switch(nr)
    {
        case 0: printf("- - - - -"); break;
        case 1: printf(". - - - -"); break;
        case 2: printf(". . - - -"); break;
        case 3: printf(". . . - -"); break;
        case 4: printf(". . . . -"); break;
        case 5: printf(". . . . ."); break;
        default: printf("Invalid choice");
    }


    return 0;
}