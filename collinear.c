#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,AB,BC,AC;
    
    printf("Enter X1 and X2 and X3: ");
    scanf("%d %d %d",&x1,&x2,&x3);
    printf("Enter Y1 and Y2 and Y3: ");
    scanf("%d %d %d",&y1,&y2,&y3);

    //Calculate distances
    AB=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    AB=sqrt(AB);

    BC=((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    BC=sqrt(BC);

    AC=((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    AC=sqrt(AC);

    if (AB+BC==AC || AC+BC==AB || AB+AC==BC)
    {
        printf("The Points are on the same Line / Collinear.\n");
    }
    else
    {
        printf("The Points are not on the same Line / Collinear.\n");
    }
    return 0;
}