#include <stdio.h>
#include <math.h>
int main()
{
    float lat_1, lat_2, long_1, long_2, D;
    const float PI = 3.141592;

    printf("Enter Latitude L1 and L2: \n");
    scanf("%f %f", &lat_1, &lat_2);
    printf("Enter Longitude G1 and G2: \n");
    scanf("%f %f", &long_1, &long_2);

    //Convert your input from Degrees to Radians

    lat_1 = lat_1 * (PI / 180);
    lat_2 = lat_2 * (PI / 180);
    long_1 = long_1 * (PI / 180);
    long_2 = long_2 * (PI / 180);

    //Formula is D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )

    D = 3693 * acos(sin(lat_1) * sin(lat_2) + cos(lat_1) * cos(lat_2) * cos(long_2 - long_1));

    printf("Distance in Nautical Miles is: %f", D);

    return 0;
}