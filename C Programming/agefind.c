#include <stdio.h>
int main()
{
    int YOB, ongoing_year, Age;
    printf("Enter the ongoing Year: ");
    scanf("%d", &ongoing_year);
    printf("Enter Your year of Birth: ");
    scanf("%d", &YOB);
    Age = ongoing_year - YOB;
    printf("Your age is: %d", Age);
    return 0;
}