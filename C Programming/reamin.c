#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter Devidened: ");
    scanf("%d", &a);
    printf("Enter Dvisor: ");
    scanf("%d", &b);
    c = a % b;
    printf("Output: %d", c);

    return 0;
}