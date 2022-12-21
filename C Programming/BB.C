#include<stdio.h>
int main()
{
    int num,n,fact;

    printf("\nEnter a Positive Integer: ");
    scanf("%d",&num);

    n=num;
    fact=num;

    while (num > 1)
    {
        fact=fact*(num-1);
        num--;
    }
    printf("\nThe factorial of %d is %d.\n\n\n",n,fact);

    return 0;
}   
            