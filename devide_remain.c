#include <stdio.h>
int main()
{
    float num1, num2, devide;
    int remain;

    printf("Enter Two Numbers: ");
    scanf("%f %f", &num1, &num2);

    devide = num1 / num2;
    remain = (int)(num1) % (int)(num2);

    printf("Division of %.2f and %.2f is %.2f and remainder is: %d", num1, num2, devide, remain);

    return 0;
}