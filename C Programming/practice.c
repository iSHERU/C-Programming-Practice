#include <stdio.h>
int main(void)
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age >= 18)
    {
        /* code */
        printf("You are an Adult!");
    }
    if (age < 18 && age > 12)
    {
        printf("YOu are Teenager");
    }
    else if (age <= 12)
    {
        /* code */
        printf("You are a Child!");
    }

    return 0;
}