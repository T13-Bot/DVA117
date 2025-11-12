#include <stdio.h>

int main(void){
    int angle;

    printf("Enter a positive angle in degrees: ");
    scanf("%d", &angle);

    if (angle < 90 && angle > 0)
    {
        printf("The angle is acute");
    } 
    else if (angle > 90 && angle < 181)
    {
        printf("The angle is obtuse");
    }
    else if (angle == 90)
    {
        printf("The angle is right angle");
    }
    else if (angle > 180 || angle < 0)
    {
        printf("Invalid angle");
    }
    
    return 0;
}