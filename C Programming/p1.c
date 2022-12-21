#include <stdio.h>
int main()
{
    int i, height = 1189, width = 841, old_height;
    i = 0;
    while (i <=8 )
    {
        printf("A%d: %d x %d\n", i, height, width);

        old_height = height;
        height = width;
        width = old_height / 2;
        
        i++;
    }
    return 0;
}