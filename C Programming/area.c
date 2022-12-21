#include <stdio.h>
/*
        Code for finding AREA of a CIRCLE
*/
int main(void)
{
    float radius, area;
    printf("Enter radius of the Circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Radius of the given Circle is: %2.2f\n", area);
}