#include<math.h>
#include<stdio.h>
int pi(float n);
int main(){
    float num;

    printf("Enter the last digit of formula: ");
    scanf("%f",&num);

    pi(num);

    return 0;
}

int pi(float n)
{
    float i,pi;
    for (i = 1; i<=n; i++)
    {
        pi=sqrt(6*(1+(1/pow(i,2))));
    }
    n=pi;
    printf("%f ",n);

    return n;
}