#include<stdio.h>
int main()
{
    int num,a,b=0;

    printf("Enter Number: ");
    scanf("%d", &num);

    while(num>0)
    {
        a=num%10;
        b=a+b;
        num/=10;
    }
    printf("The sum of Numbers is: %d",b);
    return 0;
}