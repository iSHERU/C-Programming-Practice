#include<stdio.h>
int main()
{
    int rs,thousand=0,f_hundred=0,hundred=0,fifty=0,twenty=0,ten=0;

    printf("Enter Sum of Ruppees: ");
    scanf("%d",&rs);

    if (rs>=1000)
    {
        thousand=rs/1000;
        rs%=1000;
    }

    if (rs>=500)
    {
        f_hundred=rs/500;
        rs%=500;
    }

    if (rs>=100)
    {
        hundred=rs/100;
        rs%=100;
    }

    if (rs>=50)
    {
        fifty=rs/50;
        rs%=50;
    }
    
    if (rs>=20)
    {
        twenty=rs/20;
        rs%=20;
    }

    if (rs>=10)
    {
        ten=rs/10;
        rs%=10;
    }
    
    printf("\nRS 1000: %d\nRS 500 : %d\nRS 100 : %d\nRS 50  : %d\nRS 20  : %d\nRS 10  : %d\n",thousand,f_hundred,hundred,fifty,twenty,ten);
    
    return 1;
}