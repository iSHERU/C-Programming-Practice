//use a user built function to find Factorial of a number
#include<stdio.h>
//function prototype
int fact(int n);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    //call the function
    fact(n);

    return 0;
}

//function definition
int fact(int n)
{
    int i=1,fact=1;
    while(i <= n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial is %d",fact);
    return 0;
}