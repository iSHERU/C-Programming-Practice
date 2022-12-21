#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2, radius;
    float PC;

    printf("Enter the center co-ordinates of the circle: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x2, &y2);

    // check for distance between point and center point of circle

    PC = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (PC > radius)
    {
        printf("Point (%d,%d) lies outside the Circle.", x2, y2);
    }
    else if (PC < radius)
    {
        printf("Point (%d,%d) lies inside the Circle.", x2, y2);
    }
    else if (PC == radius)
    {
        printf("Point (%d,%d) lies on the boundary of Circle.", x2, y2);
    }
    else
    {
        printf("Wrong Entry");
    }

    return 0;
}