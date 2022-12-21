#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,power;

    printf("Enter Numbers: ");
    scanf("%d %d",&num1,&num2);

    int i=1;
    num4=num1;
    while(i <= (num2 - 1))
    {
        num3=num1*num4;
        num4=num3;
        i++;
    }

    printf("Value of first number raised to power of second is: %d",num4);

    return 0;
}