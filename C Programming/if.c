#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Youre grade is A1!");
    }
    if (marks >= 80 && marks < 90)
    {
        printf("Your grade is A");
    }
    if (marks >= 70 && marks < 80)
    {
        printf("Your grade is B");
    }
    if (marks >= 60 && marks < 70)
    {
        printf("Your grade is C");
    }
    if (marks >= 50 && marks < 60)
    {
        printf("Your grade is D");
    }
    if (marks < 50)
    {
        printf("You are FAIL");
    }

    return 0;
}
