/*Code that converts cm to inches*/
#include <stdio.h>
int main()
{
    float cm, inches;
    printf("Enter Centimeters: ");
    scanf("%f", &cm);
    inches = cm / 2.54;
    printf("Value in Inches: %.2f", inches);
    return 0;
}